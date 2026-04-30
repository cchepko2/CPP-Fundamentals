% Matlab Loops
format BANK

values = [1, 2, 3, 99, 98, 76, 54]

for value = values
    fprintf("%.2f ", value)
end;

for value = values
    disp(value)
end;

for x = 1:10
    fprintf("%.2f ", x)
end

for x = linspace(0, 100, 10)
    fprintf("%.2f ", x)
end