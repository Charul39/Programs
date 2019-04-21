% Initialize matrix A and B 
A = [1, 2, 4; 5, 3, 2;1,1,1]
B = [1, 3, 4; 1, 1, 1;1,1,1]

% Initialize constant s 
s = 2

% See how element-wise addition works
add_AB = A + B 

% See how element-wise subtraction works
sub_AB = A - B

% See how scalar multiplication works
mult_As = A * s

% Divide A by s
div_As = A / s

% What happens if we have a Matrix + scalar?
add_As = A + s

M = A * B

I = eye(3)
X = inv(A)
Y = A*X