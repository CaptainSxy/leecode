# Write your MySQL query statement below
UPDATE Salary
SET
    sex = CASE sex
        WHEN 'f' then 'm'
        ELSE 'f'
    END;
    
