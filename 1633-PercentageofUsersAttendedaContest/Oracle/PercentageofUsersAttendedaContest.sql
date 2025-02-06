SELECT reg.contest_id, 
       ROUND( 100* COUNT(reg.user_id) / 
             (
                SELECT COUNT(*)
                FROM Users
             )
       ,2)
       AS percentage
FROM Register reg
LEFT JOIN Users u
ON reg.user_id = u.user_id
GROUP BY reg.contest_id
ORDER BY percentage DESC, reg.contest_id ASC;