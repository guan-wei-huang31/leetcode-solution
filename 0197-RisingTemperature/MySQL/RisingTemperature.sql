SELECT today.id
FROM Weather today
INNER JOIN Weather yest
WHERE DATEDIFF(today.recordDate,yest.recordDate)=1
AND today.temperature > yest.temperature;