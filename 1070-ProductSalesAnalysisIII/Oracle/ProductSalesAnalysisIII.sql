SELECT S.product_id, 
       S.year AS first_year, 
       S.quantity, 
       S.price
FROM Sales S
WHERE S.year = (
    SELECT MIN(year) 
    FROM Sales 
    WHERE product_id = S.product_id
);