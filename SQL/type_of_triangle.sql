select 
case 
    when A = B and B=C and A = C then 'Equilateral'
    when (A = B or B = C or A = C)
    and A+B>C then 'Isosceles'
    when A+B>C then 'Scalene'
    else 'Not A Triangle'
end 
from triangles