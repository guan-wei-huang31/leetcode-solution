/* Write your PL/SQL query statement below */
SELECT p.product_name, SUM(o.unit) AS unit
FROM Products p
INNER JOIN Orders o
ON p.product_id = o.product_id
WHERE to_char(o.order_date, 'MM-YYYY') = '02-2020'
GROUP BY p.product_name
HAVING SUM(o.unit) >= 100;