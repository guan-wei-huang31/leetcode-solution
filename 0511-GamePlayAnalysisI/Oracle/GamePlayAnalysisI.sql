SELECT player_id, to_char(min(event_date),'YYYY-MM-DD') AS first_login 
FROM Activity
GROUP BY player_id;