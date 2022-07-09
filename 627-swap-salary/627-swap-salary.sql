# Write your MySQL query statement below
update salary 
        set sex= CASE
        when sex='f' then 'm'
        when sex='m' then 'f'
        end
    