SELECT ROUND(SUM(
    CASE WHEN
    A.event_date + 1 = B.event_date
    THEN 1
    ELSE 0
    END ) / COUNT(DISTINCT A.player_id),2) AS fraction  
FROM (
    SELECT player_id, MIN(event_date) AS event_date
    FROM Activity
    GROUP BY player_id
) A
LEFT JOIN Activity B
ON A.player_id = B.player_id;