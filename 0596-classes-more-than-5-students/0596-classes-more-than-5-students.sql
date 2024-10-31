# Write your MySQL query statement below
SELECT e.class FROM Courses e 
GROUP BY 
class HAVING COUNT(student)>=5;









-- SELECT class
-- FROM Courses
-- GROUP BY class
-- HAVING COUNT(student) >= 5;
