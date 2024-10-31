SELECT w.id FROM Weather w
JOIN Weather w1 on w.recordDate=DATE_ADD(w1.recordDate,INTERVAL 1 DAY)
WHERE w.temperature>w1.temperature


-- SELECT id FROM(
--     SELECT id,temperature,LAG(temperature) OVER (ORDER BY recordDate)AS prev_temp FROM Weather
-- )AS TempComparison
-- WHERE temperature>prev_temp;



