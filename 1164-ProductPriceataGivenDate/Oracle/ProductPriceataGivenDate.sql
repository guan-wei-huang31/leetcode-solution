WITH LatestChange AS (
    SELECT product_id, MAX(change_date) AS latest_date
    FROM Products
    WHERE change_date <= TO_DATE('2019-08-16', 'YYYY-MM-DD')
    GROUP BY product_id
)
SELECT 
    p.product_id, 
    COALESCE(o.new_price, 10) AS price
FROM LatestChange p
LEFT JOIN Products o
ON p.product_id = o.product_id AND p.latest_date = o.change_date
UNION
SELECT product_id, 10 AS price
FROM Products
WHERE product_id NOT IN (SELECT product_id FROM LatestChange);

