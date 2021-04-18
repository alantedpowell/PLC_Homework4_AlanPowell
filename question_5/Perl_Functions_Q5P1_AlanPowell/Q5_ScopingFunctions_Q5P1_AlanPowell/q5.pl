# Question 5
# Created by: Alan Powell on April 17, 2021
# Perl

# Dynamic Scoping Understanding
# - My understand of dynamic scoping is that DS uses the GLOBAL
# frame, or in other words, variables (for example) declared 
# before they are used in a function.

# Dynamic Scoping Example

$GPA = 3.0;

sub func_one_dynamic {
    return $x;
}

print("My GPA is: " + func_one_dynamic);


# Static scoping Understanding
# - My understand of static scoping that SS uses the frame from
# which the variable (again, for example, could be a function as
# well) is declared within the function

# Static Scoping Example

$BaseGPA = 1.0;

sub func_one_static {
    my $GPA = $BaseGPA + 2.0;
    return $GPA;
}

print(func_one_static);