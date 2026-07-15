# 42 C++ Modules — 00 to 04

My solutions for the C++ Common Core modules at 42, all kept in this one repository since they build on each other. Each module follows on from the concepts of the previous one — Module 00 starts with the absolute basics of classes, and by Module 04 we're doing polymorphism and abstract classes.

All code complies with the **C++98** standard and compiles with `-Wall -Wextra -Werror`.

## Modules overview

| Module | Topic | Exercises done |
|---|---|---|
| [CPP_00](./CPP_00) | Namespaces, classes, member functions, streams, static, const | ex00, ex01, ex02 |
| [CPP_01](./CPP_01) | Memory allocation, pointers to members, references, switch | ex00 – ex05 |
| [CPP_02](./CPP_02) | Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form | ex00, ex01, ex02 |
| [CPP_03](./CPP_03) | Inheritance | ex00, ex01, ex02 |
| [CPP_04](./CPP_04) | Subtype polymorphism, abstract classes | ex00, ex01, ex02 |

Each module's final exercise (the bonus one) is not included.

---

## CPP_00 — Namespaces, classes, member functions, streams, static, const

- **ex00 — Megaphone**: string manipulation, uppercase conversion, handling `argv`.
- **ex01 — My Awesome PhoneBook**: `PhoneBook` and `Contact` classes, `public`/`private` encapsulation, fixed-size array (max 8 contacts, no dynamic allocation), an interactive `ADD`/`SEARCH`/`EXIT` command loop.
- **ex02 — The Job Of Your Dreams**: reconstructing a class (`Account`) from its header and a reference output log, matching behavior exactly — including static member usage for tracking data shared across all instances.

**Concepts learned:** classes vs structs, `public`/`private` access, member functions, constructors, `std::string`/`std::cin`/`std::cout`, member initialization lists, `static` members, `const` correctness, namespaces.

## CPP_01 — Memory allocation, pointers to members, references, switch

- **ex00 — BraiiiiiinnnzzzZ**: a `Zombie` class, deciding when to allocate on the stack vs the heap.
- **ex01 — Moar brainz!**: `zombieHorde()` — allocating an array of `N` objects in a single allocation.
- **ex02 — HI THIS IS BRAIN**: comparing a plain variable, a pointer to it, and a reference to it — same address, different syntax.
- **ex03 — Unnecessary violence**: `HumanA` (always armed, takes its `Weapon` by reference in the constructor) vs `HumanB` (optionally armed, takes its `Weapon` by pointer) — when to use a pointer vs a reference as a member.
- **ex04 — Sed is for losers**: file read/write and string find-and-replace, without `std::string::replace`.
- **ex05 — Harl 2.0**: pointers to member functions, dispatching to the right one without an if/else chain.

**Concepts learned:** stack vs heap allocation, `new`/`delete`, pointers vs references (and when to use which), pointer-to-member-function syntax, file I/O with `std::ifstream`/`std::ofstream`, `std::string` manipulation.

## CPP_02 — Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form

- **ex00 — My First Class in Orthodox Canonical Form**: a `Fixed` fixed-point number class, written with all four OCF functions (default constructor, copy constructor, copy assignment operator, destructor).
- **ex01 — Towards a more useful fixed-point number class**: `int`/`float` constructors and `toInt()`/`toFloat()` conversions, using bit-shifts for the fixed-point math.
- **ex02 — Now we're talking**: overloading comparison, arithmetic, increment/decrement, and stream insertion operators for `Fixed`.

**Concepts learned:** Orthodox Canonical Form (why every class needs those four functions, and what the compiler does if you don't write them), operator overloading, `this`/`*this`, fixed-point number representation.

## CPP_03 — Inheritance

- **ex00 — Aaaaand... OPEN!**: `ClapTrap`, a base class with hit points, energy points, and attack damage.
- **ex01 — Serena, my love!**: `ScavTrap`, inheriting from `ClapTrap`, overriding `attack()` and adding its own `guardGate()`.
- **ex02 — Repetitive work**: `FragTrap`, a second class inheriting independently from `ClapTrap`, with its own stats and `highFivesGuys()`.

**Concepts learned:** inheritance syntax (`class Derived : public Base`), constructor/destructor chaining (base built first, destroyed last), `protected` vs `private` access across an inheritance chain, function hiding vs overriding, and **static binding** — why calling an overridden function through a base-class pointer picks the base's version unless `virtual` is used.

## CPP_04 — Subtype polymorphism, abstract classes

- **ex00 — Polymorphism**: `Animal`, `Dog`, `Cat`, and the `virtual` keyword — proving that `makeSound()` resolves to the correct derived class even when called through an `Animal*`. `WrongAnimal`/`WrongCat` reproduce the same shape *without* `virtual`, as a deliberate contrast.
- **ex01 — I don't want to set the world on fire**: `Brain`, owned by `Dog`/`Cat` through a raw pointer — composition instead of inheritance. This is where deep copies (vs. the compiler's default shallow copy) and a `virtual` destructor stop being optional.
- **ex02 — Abstract class**: making `Animal` (renamed `AAnimal`) impossible to instantiate directly with a pure virtual function (`= 0`), while everything that already worked through pointers/references keeps working.

**Concepts learned:** the `virtual` keyword and dynamic (runtime) dispatch, how it contrasts with Module 03's static binding, composition vs inheritance (has-a vs is-a), deep vs shallow copies for classes owning raw pointers, why a base class needs a `virtual` destructor before it can be safely deleted through a base pointer, pure virtual functions and abstract classes.

---

## Building

Each exercise has its own `Makefile`:

```bash
cd CPP_0X/exXX
make
./<executable>
```
