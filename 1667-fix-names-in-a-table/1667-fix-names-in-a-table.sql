# Write your MySQL query statement below
SELECT user_id,
CONCAT(UCASE(LEFT(name, 1)), LCASE(SUBSTRING(name, 2))) name
FROM Users
ORDER BY user_id