/*
Armator - simulateur de jeu d'instruction ARMv5T à but pédagogique
Copyright (C) 2011 Guillaume Huard
Ce programme est libre, vous pouvez le redistribuer et/ou le modifier selon les
termes de la Licence Publique Générale GNU publiée par la Free Software
Foundation (version 2 ou bien toute autre version ultérieure choisie par vous).

Ce programme est distribué car potentiellement utile, mais SANS AUCUNE
GARANTIE, ni explicite ni implicite, y compris les garanties de
commercialisation ou d'adaptation dans un but spécifique. Reportez-vous à la
Licence Publique Générale GNU pour plus de détails.

Vous devez avoir reçu une copie de la Licence Publique Générale GNU en même
temps que ce programme ; si ce n'est pas le cas, écrivez à la Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307,
États-Unis.

Contact: Guillaume.Huard@imag.fr
	 Bâtiment IMAG
	 700 avenue centrale, domaine universitaire
	 38401 Saint Martin d'Hères
*/
#include "arm_data_processing.h"
#include "arm_exception.h"
#include "arm_constants.h"
#include "arm_branch_other.h"
#include "util.h"
#include "debug.h"

/* Decoding functions for different classes of instructions */
int arm_data_processing_shift(arm_core p, uint32_t ins) {


		switch case (get_bits(ins,25,21){
				case 0:AND(p,ins)
					break;
				case 1:EOR(p,ins)
					break;
				case 2:SUB(p,ins)
					break;
				case 3:RSB(p,ins)
					break;
				case 4:ADD(p,ins)
					break;
				case 5:ADC(p,ins)
					break;
				case 6:SBC(p,ins)
					break;
				case 7:RSC(p,ins)
					break;
				case 8:TST(p,ins)
					break;
				case 9:TEQ(p,ins)
					break;
				case 10:CMP(p,ins)
					break;
				case 11:ORR(p,ins)
					break;
				case 12:MOV(p,ins)
					break;
				case 13:BIC(p,ins)
					break;
				case 14:MVN(p,ins)
					break;
				break;
		}
    return 0;
}

int arm_data_processing_immediate_msr(arm_core p, uint32_t ins) {
		switch case (get_bits(ins,25,21){
				case 0:AND(p,ins)
					break;
				case 1:EOR(p,ins)
					break;
				case 2:SUB(p,ins)
					break;
				case 3:RSB(p,ins)
					break;
				case 4:ADD(p,ins)
					break;
				case 5:ADC(p,ins)
					break;
				case 6:SBC(p,ins)
					break;
				case 7:RSC(p,ins)
					break;
				case 8:TST(p,ins)
					break;
				case 9:TEQ(p,ins)
					break;
				case 10:CMP(p,ins)
					break;
				case 11:ORR(p,ins)
					break;
				case 12:MOV(p,ins)
					break;
				case 13:BIC(p,ins)
					break;
				case 14:MVN(p,ins)
					break;
				break;
		}
    return 0;
}
