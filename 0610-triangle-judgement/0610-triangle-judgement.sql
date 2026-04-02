SELECT 
  x,y,z,
  CASE
     WHEN x+y>Z
     AND x+z>y
     AND y+z>x
     THEN 'Yes'
     ELSE 'No'
   END AS triangle
   FROM Triangle;
