SELECT employee_id
FROM (SELECT employee_id, manager_id 
        FROM Employees 
        WHERE salary < 30000)
WHERE manager_id IS NOT NULL AND manager_id not in (SELECT employee_id FROM Employees)
order by employee_id;