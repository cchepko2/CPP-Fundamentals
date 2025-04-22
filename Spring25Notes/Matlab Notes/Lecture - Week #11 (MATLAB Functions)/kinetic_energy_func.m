function energy = kinetic_energy_func(mass, velocity)
% kinetic_energy_func(mass, velocity)
%
% Returns the kinetic energy of a particle whose mass and velocity are passed in.
%

energy = 0.5 * mass .* (velocity .^ 2);

end