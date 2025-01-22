# Write your MySQL query statement below
select activity_date AS day , count(distinct user_id) AS active_users
from Activity
where (activity_date > "2019-06-27" AND activity_date <= "2019-07-27")
GROUP BY  activity_date;