/*$file${.::pelican.h} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
/*
* Model: pelican.qm
* File:  ${.::pelican.h}
*
* This code has been generated by QM 4.5.1 (https://www.state-machine.com/qm).
* DO NOT EDIT THIS FILE MANUALLY. All your changes will be lost.
*
* This program is open source software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published
* by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*/
/*$endhead${.::pelican.h} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
#ifndef pelican_h
#define pelican_h

enum PelicanSignals {
    PEDS_WAITING_SIG = Q_USER_SIG,
    OFF_SIG,
    ON_SIG,
    TERMINATE_SIG
};

/* active objects ................................................*/
/*$declare${components::Pelican_ctor} vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv*/
/*${components::Pelican_ctor} ..............................................*/
void Pelican_ctor(void);
/*$enddecl${components::Pelican_ctor} ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/

extern struct Pelican AO_Pelican;

#endif /* pelican_h */
