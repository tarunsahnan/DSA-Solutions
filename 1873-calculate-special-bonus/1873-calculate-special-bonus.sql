# # Write your MySQL query statement below
# select employee_id, 
#         case
#         when employee_id%2=1 AND name NOT LIKE "M%" then salary
#         else 0
#         end
#     as bonus
#     from Employees
    
    
    SELECT employee_id, 
    CASE 
    WHEN employee_id%2=1 AND name NOT LIKE 'M%' THEN salary 
    ELSE 0 
    END 
AS bonus FROM Employees
order by employee_id;