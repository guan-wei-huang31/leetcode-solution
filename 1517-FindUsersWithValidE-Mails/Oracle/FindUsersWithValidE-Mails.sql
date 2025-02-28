SELECT user_id, name, mail
FROM Users
WHERE REGEXP_LIKE(mail, '^[A-Za-z][a-zA-Z0-9_.-]*@leetcode[.]com$');