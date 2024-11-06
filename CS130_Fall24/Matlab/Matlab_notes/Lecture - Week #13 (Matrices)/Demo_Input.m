% Programmer: Wayne Wall
% Description: Demo of how to input from the console.

%% Start with a clean slate

clear; clc; close all; format;

%% Prompt user for input

% Loop until an empty value entered (i.e., user hits Enter key)...

while ( 1 == 1 )

  input_entity = input('Enter a scalar, vector or matrix: ')

  dimensions = size(input_entity);
  num_rows = dimensions(1)
  num_cols = dimensions(2)
  
  % Break out of loop if empty entity8.9 was input
  
  if ( ( num_rows == 0 ) && ( num_cols == 0 ) )
    break
  end  

  %% Display the type of input...

  if ( num_rows == 1 )

    if ( num_cols == 1 )
      disp('Input is a scalar.');
    else
      disp('Input is a row vector.');
    end 
    
  else
    
    if ( num_cols == 1 )
      disp('Input is a column vector.');
    else
      
      if ( num_rows == num_cols )
        disp('Input is a square matrix');
      else
        disp('Input is NOT a square matrix');
      end
      
    end

  end;  

end;  % End of while loop

disp('Goodbye!');
