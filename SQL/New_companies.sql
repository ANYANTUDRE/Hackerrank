select c.company_code, c.founder, 
count(distinct l.lead_manager_code),
count(distinct s.senior_manager_code),
count(distinct m.manager_code),
count(distinct e.employee_code)
from Company as c
join Lead_Manager as l on c.company_code=l.company_code
join Senior_Manager as s on l.lead_manager_code=s.lead_manager_code
join Manager as m on s.senior_manager_code=m.senior_manager_code
join Employee as e on m. manager_code=e.manager_code
group by company_code, founder
order by company_code