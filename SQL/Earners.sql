SELECT
    months * salary, 
    COUNT(months * salary) 
FROM Employee
GROUP BY months * salary
ORDER BY months * salary desc
LIMIT 1;