SELECT x, y, z, 
    (CASE WHEN z < x + y AND x < z + y AND y < x + z 
    THEN 'Yes' ELSE 'No' END) AS triangle
FROM Triangle;