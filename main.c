/*
   There are a total of 59 entries in the algebraic variable array.
   There are a total of 28 entries in each of the rate and state variable arrays.
   There are a total of 70 entries in the constant variable array.
 */
/*
 * VOI is time in component environment (second).
 * STATES[0] is V in component membrane (millivolt).
 * CONSTANTS[0] is R in component membrane (millijoule_per_mole_kelvin).
 * CONSTANTS[1] is T in component membrane (kelvin).
 * CONSTANTS[2] is F in component membrane (coulomb_per_mole).
 * CONSTANTS[3] is Cm in component membrane (microF).
 * ALGEBRAIC[26] is i_Na in component sodium_current (nanoA).
 * ALGEBRAIC[27] is i_Ca_L in component L_type_Ca_channel (nanoA).
 * ALGEBRAIC[56] is i_Ca_T in component T_type_Ca_channel (nanoA).
 * ALGEBRAIC[29] is i_t in component Ca_independent_transient_outward_K_current (nanoA).
 * ALGEBRAIC[30] is i_ss in component steady_state_outward_K_current (nanoA).
 * ALGEBRAIC[34] is i_f in component hyperpolarisation_activated_current (nanoA).
 * ALGEBRAIC[31] is i_K1 in component inward_rectifier (nanoA).
 * ALGEBRAIC[38] is i_B in component background_currents (nanoA).
 * ALGEBRAIC[39] is i_NaK in component sodium_potassium_pump (nanoA).
 * ALGEBRAIC[41] is i_NaCa in component Na_Ca_ion_exchanger_current (nanoA).
 * ALGEBRAIC[40] is i_Ca_P in component sarcolemmal_calcium_pump_current (nanoA).
 * ALGEBRAIC[13] is i_Stim in component membrane (nanoA).
 * CONSTANTS[4] is stim_start in component membrane (second).
 * CONSTANTS[5] is stim_end in component membrane (second).
 * CONSTANTS[6] is stim_period in component membrane (second).
 * CONSTANTS[7] is stim_duration in component membrane (second).
 * CONSTANTS[8] is stim_amplitude in component membrane (nanoA).
 * ALGEBRAIC[25] is E_Na in component sodium_current (millivolt).
 * CONSTANTS[9] is g_Na in component sodium_current (microS).
 * STATES[1] is Na_i in component intracellular_ion_concentrations (millimolar).
 * CONSTANTS[10] is Na_o in component standard_ionic_concentrations (millimolar).
 * STATES[2] is m in component sodium_current_m_gate (dimensionless).
 * STATES[3] is h in component sodium_current_h_gate (dimensionless).
 * STATES[4] is j in component sodium_current_j_gate (dimensionless).
 * ALGEBRAIC[0] is m_max in component sodium_current_m_gate (dimensionless).
 * ALGEBRAIC[14] is tau_m in component sodium_current_m_gate (second).
 * ALGEBRAIC[1] is h_max in component sodium_current_h_gate (dimensionless).
 * ALGEBRAIC[15] is tau_h in component sodium_current_h_gate (second).
 * ALGEBRAIC[2] is j_max in component sodium_current_j_gate (dimensionless).
 * ALGEBRAIC[16] is tau_j in component sodium_current_j_gate (second).
 * CONSTANTS[11] is g_Ca_L in component L_type_Ca_channel (microS).
 * CONSTANTS[12] is E_Ca_L in component L_type_Ca_channel and E_Ca_T in component T_type_Ca_channel (millivolt).
 * STATES[5] is Ca_ss in component intracellular_ion_concentrations (millimolar).
 * STATES[6] is d in component L_type_Ca_channel_d_gate (dimensionless).
 * STATES[7] is f_11 in component L_type_Ca_channel_f_11_gate (dimensionless).
 * STATES[8] is f_12 in component L_type_Ca_channel_f_12_gate (dimensionless).
 * STATES[9] is Ca_inact in component L_type_Ca_channel_Ca_inact_gate (dimensionless).
 * ALGEBRAIC[3] is d_max in component L_type_Ca_channel_d_gate (dimensionless).
 * ALGEBRAIC[17] is tau_d in component L_type_Ca_channel_d_gate (second).
 * ALGEBRAIC[4] is f_11_max in component L_type_Ca_channel_f_11_gate (dimensionless).
 * ALGEBRAIC[18] is tau_f_11 in component L_type_Ca_channel_f_11_gate (second).
 * ALGEBRAIC[5] is f_12_max in component L_type_Ca_channel_f_12_gate (dimensionless).
 * ALGEBRAIC[19] is tau_f_12 in component L_type_Ca_channel_f_12_gate (second).
 * CONSTANTS[13] is tau_Ca_inact in component L_type_Ca_channel_Ca_inact_gate (second).
 * ALGEBRAIC[6] is Ca_inact_max in component L_type_Ca_channel_Ca_inact_gate (dimensionless).
 * ALGEBRAIC[57] is tau_b in T_type_Ca_channel (second).
 * ALGEBRAIC[58] is tau_g in T_type_Ca_channel (second).
 * ALGEBRAIC[54] is b_inf in T_type_Ca_channel (dimensionless).
 * ALGEBRAIC[55] is g_inf in T_type_Ca_channel (dimensionless).
 * STATES[26] is b in T_type_Ca_channel (dimensionless).
 * STATES[27] is g in T_type_Ca_channel (dimensionless).
 * CONSTANTS[69] is G_Ca_T in T_type_Ca_channel (dimensionless).
 * ALGEBRAIC[28] is E_K in component Ca_independent_transient_outward_K_current (millivolt).
 * CONSTANTS[14] is g_t in component Ca_independent_transient_outward_K_current (microS).
 * CONSTANTS[15] is a in component Ca_independent_transient_outward_K_current (dimensionless).
 * CONSTANTS[16] is b in component Ca_independent_transient_outward_K_current (dimensionless).
 * CONSTANTS[17] is K_o in component standard_ionic_concentrations (millimolar).
 * STATES[10] is K_i in component intracellular_ion_concentrations (millimolar).
 * STATES[11] is r in component Ca_independent_transient_outward_K_current_r_gate (dimensionless).
 * STATES[12] is s in component Ca_independent_transient_outward_K_current_s_gate (dimensionless).
 * STATES[13] is s_slow in component Ca_independent_transient_outward_K_current_s_slow_gate (dimensionless).
 * ALGEBRAIC[20] is tau_r in component Ca_independent_transient_outward_K_current_r_gate (second).
 * ALGEBRAIC[7] is r_max in component Ca_independent_transient_outward_K_current_r_gate (dimensionless).
 * ALGEBRAIC[21] is tau_s in component Ca_independent_transient_outward_K_current_s_gate (second).
 * ALGEBRAIC[8] is s_max in component Ca_independent_transient_outward_K_current_s_gate (dimensionless).
 * ALGEBRAIC[22] is tau_s_slow in component Ca_independent_transient_outward_K_current_s_slow_gate (second).
 * ALGEBRAIC[9] is s_slow_max in component Ca_independent_transient_outward_K_current_s_slow_gate (dimensionless).
 * CONSTANTS[18] is g_ss in component steady_state_outward_K_current (microS).
 * STATES[14] is r_ss in component steady_state_outward_K_current_r_ss_gate (dimensionless).
 * STATES[15] is s_ss in component steady_state_outward_K_current_s_ss_gate (dimensionless).
 * ALGEBRAIC[23] is tau_r_ss in component steady_state_outward_K_current_r_ss_gate (second).
 * ALGEBRAIC[10] is r_ss_max in component steady_state_outward_K_current_r_ss_gate (dimensionless).
 * CONSTANTS[66] is tau_s_ss in component steady_state_outward_K_current_s_ss_gate (second).
 * ALGEBRAIC[11] is s_ss_max in component steady_state_outward_K_current_s_ss_gate (dimensionless).
 * CONSTANTS[19] is g_K1 in component inward_rectifier (microS).
 * ALGEBRAIC[32] is i_f_Na in component hyperpolarisation_activated_current (nanoA).
 * ALGEBRAIC[33] is i_f_K in component hyperpolarisation_activated_current (nanoA).
 * CONSTANTS[20] is g_f in component hyperpolarisation_activated_current (microS).
 * CONSTANTS[21] is f_Na in component hyperpolarisation_activated_current (dimensionless).
 * CONSTANTS[67] is f_K in component hyperpolarisation_activated_current (dimensionless).
 * STATES[16] is y in component hyperpolarisation_activated_current_y_gate (dimensionless).
 * ALGEBRAIC[24] is tau_y in component hyperpolarisation_activated_current_y_gate (second).
 * ALGEBRAIC[12] is y_infinity in component hyperpolarisation_activated_current_y_gate (dimensionless).
 * ALGEBRAIC[35] is i_B_Na in component background_currents (nanoA).
 * ALGEBRAIC[36] is i_B_Ca in component background_currents (nanoA).
 * ALGEBRAIC[37] is i_B_K in component background_currents (nanoA).
 * CONSTANTS[22] is g_B_Na in component background_currents (microS).
 * CONSTANTS[23] is g_B_Ca in component background_currents (microS).
 * CONSTANTS[24] is g_B_K in component background_currents (microS).
 * CONSTANTS[25] is E_Ca in component background_currents (millivolt).
 * CONSTANTS[26] is Ca_o in component standard_ionic_concentrations (millimolar).
 * STATES[17] is Ca_i in component intracellular_ion_concentrations (millimolar).
 * CONSTANTS[27] is i_NaK_max in component sodium_potassium_pump (nanoA).
 * CONSTANTS[28] is K_m_K in component sodium_potassium_pump (millimolar).
 * CONSTANTS[29] is K_m_Na in component sodium_potassium_pump (millimolar).
 * CONSTANTS[68] is sigma in component sodium_potassium_pump (dimensionless).
 * CONSTANTS[30] is i_Ca_P_max in component sarcolemmal_calcium_pump_current (nanoA).
 * CONSTANTS[31] is K_NaCa in component Na_Ca_ion_exchanger_current (nanoA_per_millimolar4).
 * CONSTANTS[32] is d_NaCa in component Na_Ca_ion_exchanger_current (per_millimolar4).
 * CONSTANTS[33] is gamma_NaCa in component Na_Ca_ion_exchanger_current (dimensionless).
 * ALGEBRAIC[42] is J_rel in component SR_Ca_release_channel (millimolar_per_second).
 * CONSTANTS[34] is v1 in component SR_Ca_release_channel (per_second).
 * CONSTANTS[35] is k_a_plus in component SR_Ca_release_channel (per_millimolar4_per_second).
 * CONSTANTS[36] is k_a_minus in component SR_Ca_release_channel (per_second).
 * CONSTANTS[37] is k_b_plus in component SR_Ca_release_channel (per_millimolar3_per_second).
 * CONSTANTS[38] is k_b_minus in component SR_Ca_release_channel (per_second).
 * CONSTANTS[39] is k_c_plus in component SR_Ca_release_channel (per_second).
 * CONSTANTS[40] is k_c_minus in component SR_Ca_release_channel (per_second).
 * STATES[18] is P_O1 in component SR_Ca_release_channel (dimensionless).
 * STATES[19] is P_O2 in component SR_Ca_release_channel (dimensionless).
 * STATES[20] is P_C1 in component SR_Ca_release_channel (dimensionless).
 * STATES[21] is P_C2 in component SR_Ca_release_channel (dimensionless).
 * STATES[22] is Ca_JSR in component intracellular_ion_concentrations (millimolar).
 * ALGEBRAIC[45] is J_up in component SERCA2a_pump (millimolar_per_second).
 * CONSTANTS[41] is K_fb in component SERCA2a_pump (millimolar).
 * CONSTANTS[42] is K_rb in component SERCA2a_pump (millimolar).
 * ALGEBRAIC[43] is fb in component SERCA2a_pump (dimensionless).
 * ALGEBRAIC[44] is rb in component SERCA2a_pump (dimensionless).
 * CONSTANTS[43] is Vmaxf in component SERCA2a_pump (millimolar_per_second).
 * CONSTANTS[44] is Vmaxr in component SERCA2a_pump (millimolar_per_second).
 * CONSTANTS[45] is K_SR in component SERCA2a_pump (dimensionless).
 * CONSTANTS[46] is N_fb in component SERCA2a_pump (dimensionless).
 * CONSTANTS[47] is N_rb in component SERCA2a_pump (dimensionless).
 * STATES[23] is Ca_NSR in component intracellular_ion_concentrations (millimolar).
 * ALGEBRAIC[47] is J_tr in component intracellular_and_SR_Ca_fluxes (millimolar_per_second).
 * ALGEBRAIC[46] is J_xfer in component intracellular_and_SR_Ca_fluxes (millimolar_per_second).
 * ALGEBRAIC[52] is J_trpn in component intracellular_and_SR_Ca_fluxes (millimolar_per_second).
 * CONSTANTS[48] is tau_tr in component intracellular_and_SR_Ca_fluxes (second).
 * CONSTANTS[49] is tau_xfer in component intracellular_and_SR_Ca_fluxes (second).
 * STATES[24] is HTRPNCa in component intracellular_and_SR_Ca_fluxes (millimolar).
 * STATES[25] is LTRPNCa in component intracellular_and_SR_Ca_fluxes (millimolar).
 * ALGEBRAIC[48] is J_HTRPNCa in component intracellular_and_SR_Ca_fluxes (millimolar_per_second).
 * ALGEBRAIC[51] is J_LTRPNCa in component intracellular_and_SR_Ca_fluxes (millimolar_per_second).
 * CONSTANTS[50] is HTRPN_tot in component intracellular_and_SR_Ca_fluxes (millimolar).
 * CONSTANTS[51] is LTRPN_tot in component intracellular_and_SR_Ca_fluxes (millimolar).
 * CONSTANTS[52] is k_htrpn_plus in component intracellular_and_SR_Ca_fluxes (per_millimolar_per_second).
 * CONSTANTS[53] is k_htrpn_minus in component intracellular_and_SR_Ca_fluxes (per_second).
 * CONSTANTS[54] is k_ltrpn_plus in component intracellular_and_SR_Ca_fluxes (per_millimolar_per_second).
 * CONSTANTS[55] is k_ltrpn_minus in component intracellular_and_SR_Ca_fluxes (per_second).
 * CONSTANTS[56] is V_myo in component intracellular_ion_concentrations (micro_litre).
 * CONSTANTS[57] is V_JSR in component intracellular_ion_concentrations (micro_litre).
 * CONSTANTS[58] is V_NSR in component intracellular_ion_concentrations (micro_litre).
 * CONSTANTS[59] is V_SS in component intracellular_ion_concentrations (micro_litre).
 * CONSTANTS[60] is K_mCMDN in component intracellular_ion_concentrations (millimolar).
 * CONSTANTS[61] is K_mCSQN in component intracellular_ion_concentrations (millimolar).
 * CONSTANTS[62] is K_mEGTA in component intracellular_ion_concentrations (millimolar).
 * CONSTANTS[63] is CMDN_tot in component intracellular_ion_concentrations (millimolar).
 * CONSTANTS[64] is CSQN_tot in component intracellular_ion_concentrations (millimolar).
 * CONSTANTS[65] is EGTA_tot in component intracellular_ion_concentrations (millimolar).
 * ALGEBRAIC[53] is beta_i in component intracellular_ion_concentrations (dimensionless).
 * ALGEBRAIC[49] is beta_SS in component intracellular_ion_concentrations (dimensionless).
 * RATES[20] is d/dt P_C1 in component SR_Ca_release_channel (dimensionless).
 * ALGEBRAIC[50] is beta_JSR in component intracellular_ion_concentrations (dimensionless).
 * RATES[0] is d/dt V in component membrane (millivolt).
 * RATES[2] is d/dt m in component sodium_current_m_gate (dimensionless).
 * RATES[3] is d/dt h in component sodium_current_h_gate (dimensionless).
 * RATES[4] is d/dt j in component sodium_current_j_gate (dimensionless).
 * RATES[6] is d/dt d in component L_type_Ca_channel_d_gate (dimensionless).
 * RATES[7] is d/dt f_11 in component L_type_Ca_channel_f_11_gate (dimensionless).
 * RATES[8] is d/dt f_12 in component L_type_Ca_channel_f_12_gate (dimensionless).
 * RATES[9] is d/dt Ca_inact in component L_type_Ca_channel_Ca_inact_gate (dimensionless).
 * RATES[11] is d/dt r in component Ca_independent_transient_outward_K_current_r_gate (dimensionless).
 * RATES[12] is d/dt s in component Ca_independent_transient_outward_K_current_s_gate (dimensionless).
 * RATES[13] is d/dt s_slow in component Ca_independent_transient_outward_K_current_s_slow_gate (dimensionless).
 * RATES[14] is d/dt r_ss in component steady_state_outward_K_current_r_ss_gate (dimensionless).
 * RATES[15] is d/dt s_ss in component steady_state_outward_K_current_s_ss_gate (dimensionless).
 * RATES[16] is d/dt y in component hyperpolarisation_activated_current_y_gate (dimensionless).
 * RATES[18] is d/dt P_O1 in component SR_Ca_release_channel (dimensionless).
 * RATES[19] is d/dt P_O2 in component SR_Ca_release_channel (dimensionless).
 * RATES[21] is d/dt P_C2 in component SR_Ca_release_channel (dimensionless).
 * RATES[24] is d/dt HTRPNCa in component intracellular_and_SR_Ca_fluxes (millimolar).
 * RATES[25] is d/dt LTRPNCa in component intracellular_and_SR_Ca_fluxes (millimolar).
 * RATES[17] is d/dt Ca_i in component intracellular_ion_concentrations (millimolar).
 * RATES[1] is d/dt Na_i in component intracellular_ion_concentrations (millimolar).
 * RATES[10] is d/dt K_i in component intracellular_ion_concentrations (millimolar).
 * RATES[5] is d/dt Ca_ss in component intracellular_ion_concentrations (millimolar).
 * RATES[22] is d/dt Ca_JSR in component intracellular_ion_concentrations (millimolar).
 * RATES[23] is d/dt Ca_NSR in component intracellular_ion_concentrations (millimolar).
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void initFromFile(const char* filename, double* CONSTANTS, double* RATES, double *STATES)
{
  FILE* configfile = fopen(filename, "r");
  char * line = NULL;
  size_t len = 0;
  int placeholder;
  float buffer;

  for(int i = 0; i < 28; i++)
  {
    getline(&line, &len, configfile);
    sscanf(line, "STATES[%d] = %f", &placeholder, &buffer);
    STATES[i] = buffer;
  }
  for(int i = 0; i < 70; i++)
  {
    getline(&line, &len, configfile);
    sscanf(line, "CONSTANTS[%d] = %f", &placeholder, &buffer);
    CONSTANTS[i] = buffer;
  }
  fclose(configfile);

  //debug 
  /*
  FILE* debug = fopen("debug.txt", "w");
  for(int i = 0; i < 28; i++)
  {
    fprintf(debug, "STATES[%d] = %f\n", i, STATES[i]);
  }
  for(int i = 0; i < 70; i++)
  {
    fprintf(debug, "CONSTANTS[%d] = %f\n", i, CONSTANTS[i]);
  }
  fclose(debug);
  */

  //calculated constants
  CONSTANTS[67] = 1.00000 - CONSTANTS[21];
  CONSTANTS[68] = (exp(CONSTANTS[10]/67.3000) - 1.00000)/7.00000;
}

void
initConsts(double* CONSTANTS, double* RATES, double *STATES)
{
STATES[0] = -80.50146;
CONSTANTS[0] = 8314.5;
CONSTANTS[1] = 295;
CONSTANTS[2] = 96487;
CONSTANTS[3] = 0.0001;
CONSTANTS[4] = 0.1;
CONSTANTS[5] = 10;
CONSTANTS[6] = 1;
CONSTANTS[7] = 0.005;
CONSTANTS[8] = -0.6;
CONSTANTS[9] = 0.8;
STATES[1] = 10.73519;
CONSTANTS[10] = 140;
STATES[2] = 0.004164108;
STATES[3] = 0.6735613;
STATES[4] = 0.6729362;
CONSTANTS[11] = 0.031;
CONSTANTS[12] = 65;
STATES[5] = 0.00008737212;
STATES[6] = 0.000002171081;
STATES[7] = 0.9999529;
STATES[8] = 0.9999529;
STATES[9] = 0.9913102;
CONSTANTS[13] = 0.009;
CONSTANTS[14] = 0.035;
CONSTANTS[15] = 0.886;
CONSTANTS[16] = 0.114;
CONSTANTS[17] = 5.4;
STATES[10] = 139.2751;
STATES[11] = 0.002191519;
STATES[12] = 0.9842542;
STATES[13] = 0.6421196;
CONSTANTS[18] = 0.007;
STATES[14] = 0.002907171;
STATES[15] = 0.3142767;
CONSTANTS[19] = 0.024;
CONSTANTS[20] = 0.00145;
CONSTANTS[21] = 0.2;
STATES[16] = 0.003578708;
CONSTANTS[22] = 0.00008015;
CONSTANTS[23] = 0.0000324;
CONSTANTS[24] = 0.000138;
CONSTANTS[25] = 65;
CONSTANTS[26] = 1.2;
STATES[17] = 0.00007901351;
CONSTANTS[27] = 0.08;
CONSTANTS[28] = 1.5;
CONSTANTS[32] = 0.0001;
CONSTANTS[29] = 10;
CONSTANTS[30] = 0.004;
CONSTANTS[31] = 0.000009984;
CONSTANTS[33] = 0.5;
STATES[25] = 5.1619e-3;
CONSTANTS[34] = 1.8e3;
CONSTANTS[35] = 12.15e12;
CONSTANTS[36] = 576;
CONSTANTS[37] = 4.05e9;
CONSTANTS[38] = 1930;
CONSTANTS[39] = 100;
CONSTANTS[40] = 0.8;
STATES[18] = 0.0004327548;
STATES[19] = 0.000000000606254;
STATES[20] = 0.6348229;
STATES[21] = 0.3647471;
STATES[22] = 0.06607948;
CONSTANTS[41] = 0.000168;
CONSTANTS[42] = 3.29;
CONSTANTS[43] = 0.04;
CONSTANTS[44] = 0.9;
CONSTANTS[45] = 1;
CONSTANTS[46] = 1.2;
CONSTANTS[47] = 1;
STATES[23] = 0.06600742;
CONSTANTS[48] = 0.0005747;
CONSTANTS[49] = 0.0267;
STATES[24] = 1.394301e-1;
CONSTANTS[50] = 0.14;
CONSTANTS[51] = 0.07;
CONSTANTS[52] = 200000;
CONSTANTS[53] = 0.066;
CONSTANTS[54] = 40000;
RATES[19] =  CONSTANTS[37]*pow(STATES[5], 3.00000)*STATES[18] -  CONSTANTS[38]*STATES[19];
CONSTANTS[55] = 40;
CONSTANTS[56] = 9.36e-6;
CONSTANTS[57] = 5.6e-8;
CONSTANTS[58] = 5.04e-7;
CONSTANTS[59] = 1.2e-9;
CONSTANTS[60] = 0.00238;
CONSTANTS[61] = 0.8;
CONSTANTS[62] = 0.00015;
CONSTANTS[63] = 0.05;
CONSTANTS[64] = 15;
CONSTANTS[65] = 10;
CONSTANTS[66] = 2.10000;
CONSTANTS[67] = 1.00000 - CONSTANTS[21];
CONSTANTS[68] = (exp(CONSTANTS[10]/67.3000) - 1.00000)/7.00000;
CONSTANTS[69] = 5.4e-4;
STATES[26] = 0.0;
STATES[27] = 1.0;
}
void
computeRates(double VOI, double* CONSTANTS, double* RATES, double* STATES, double* ALGEBRAIC)
{
RATES[20] =  - CONSTANTS[35]*pow(STATES[5], 4.00000)*STATES[20]+ CONSTANTS[36]*STATES[18];
RATES[18] = ( CONSTANTS[35]*pow(STATES[5], 4.00000)*STATES[20] - ( CONSTANTS[36]*STATES[18]+ CONSTANTS[37]*pow(STATES[5], 3.00000)*STATES[18]+ CONSTANTS[39]*STATES[18]))+ CONSTANTS[38]*STATES[19]+ CONSTANTS[40]*STATES[21];
RATES[21] =  CONSTANTS[39]*STATES[18] -  CONSTANTS[40]*STATES[21];
ALGEBRAIC[6] = 1.00000/(1.00000+STATES[5]/0.0100000);
RATES[9] = (ALGEBRAIC[6] - STATES[9])/CONSTANTS[13];
ALGEBRAIC[11] = 1.00000/(1.00000+exp((STATES[0]+87.5000)/10.3000));
RATES[15] = (ALGEBRAIC[11] - STATES[15])/CONSTANTS[66];
ALGEBRAIC[0] = 1.00000/(1.00000+exp((STATES[0]+45.0000)/- 6.50000));
ALGEBRAIC[14] = 0.00136000/(( 0.320000*(STATES[0]+47.1300))/(1.00000 - exp( - 0.100000*(STATES[0]+47.1300)))+ 0.0800000*exp(- STATES[0]/11.0000));
RATES[2] = (ALGEBRAIC[0] - STATES[2])/ALGEBRAIC[14];
ALGEBRAIC[1] = 1.00000/(1.00000+exp((STATES[0]+76.1000)/6.07000));
ALGEBRAIC[15] = (STATES[0]>=- 40.0000 ?  0.000453700*(1.00000+exp(- (STATES[0]+10.6600)/11.1000)) : 0.00349000/( 0.135000*exp(- (STATES[0]+80.0000)/6.80000)+ 3.56000*exp( 0.0790000*STATES[0])+ 310000.*exp( 0.350000*STATES[0])));
RATES[3] = (ALGEBRAIC[1] - STATES[3])/ALGEBRAIC[15];
ALGEBRAIC[2] = 1.00000/(1.00000+exp((STATES[0]+76.1000)/6.07000));
ALGEBRAIC[16] = (STATES[0]>=- 40.0000 ? ( 0.0116300*(1.00000+exp( - 0.100000*(STATES[0]+32.0000))))/exp( - 2.53500e-07*STATES[0]) : 0.00349000/( ((STATES[0]+37.7800)/(1.00000+exp( 0.311000*(STATES[0]+79.2300))))*( - 127140.*exp( 0.244400*STATES[0]) -  3.47400e-05*exp( - 0.0439100*STATES[0]))+( 0.121200*exp( - 0.0105200*STATES[0]))/(1.00000+exp( - 0.137800*(STATES[0]+40.1400)))));
RATES[4] = (ALGEBRAIC[2] - STATES[4])/ALGEBRAIC[16];
ALGEBRAIC[3] = 1.00000/(1.00000+exp((STATES[0]+15.3000)/- 5.00000));
ALGEBRAIC[17] =  0.00305000*exp( - 0.00450000*pow(STATES[0]+7.00000, 2.00000))+ 0.00105000*exp( - 0.00200000*pow(STATES[0] - 18.0000, 2.00000))+0.000250000;
RATES[6] = (ALGEBRAIC[3] - STATES[6])/ALGEBRAIC[17];
ALGEBRAIC[4] = 1.00000/(1.00000+exp((STATES[0]+26.7000)/5.40000));
ALGEBRAIC[18] =  0.105000*exp(- pow((STATES[0]+45.0000)/12.0000, 2.00000))+0.0400000/(1.00000+exp((- STATES[0]+25.0000)/25.0000))+0.0150000/(1.00000+exp((STATES[0]+75.0000)/25.0000))+0.00170000;
RATES[7] = (ALGEBRAIC[4] - STATES[7])/ALGEBRAIC[18];
ALGEBRAIC[5] = 1.00000/(1.00000+exp((STATES[0]+26.7000)/5.40000));
ALGEBRAIC[19] =  0.0410000*exp(- pow((STATES[0]+47.0000)/12.0000, 2.00000))+0.0800000/(1.00000+exp((STATES[0]+55.0000)/- 5.00000))+0.0150000/(1.00000+exp((STATES[0]+75.0000)/25.0000))+0.00170000;
RATES[8] = (ALGEBRAIC[5] - STATES[8])/ALGEBRAIC[19];
ALGEBRAIC[20] = 1.00000/( 45.1600*exp( 0.0357700*(STATES[0]+50.0000))+ 98.9000*exp( - 0.100000*(STATES[0]+38.0000)));
ALGEBRAIC[7] = 1.00000/(1.00000+exp((STATES[0]+10.6000)/- 11.4200));
RATES[11] = (ALGEBRAIC[7] - STATES[11])/ALGEBRAIC[20];
ALGEBRAIC[21] =  0.350000*exp(- pow((STATES[0]+70.0000)/15.0000, 2.00000))+0.0350000;
ALGEBRAIC[8] = 1.00000/(1.00000+exp((STATES[0]+45.3000)/6.88410));
RATES[12] = (ALGEBRAIC[8] - STATES[12])/ALGEBRAIC[21];
ALGEBRAIC[22] =  3.70000*exp(- pow((STATES[0]+70.0000)/30.0000, 2.00000))+0.0350000;
ALGEBRAIC[9] = 1.00000/(1.00000+exp((STATES[0]+45.3000)/6.88410));
RATES[13] = (ALGEBRAIC[9] - STATES[13])/ALGEBRAIC[22];
ALGEBRAIC[23] = 10.0000/( 45.1600*exp( 0.0357700*(STATES[0]+50.0000))+ 98.9000*exp( - 0.100000*(STATES[0]+38.0000)));
ALGEBRAIC[10] = 1.00000/(1.00000+exp((STATES[0]+11.5000)/- 11.8200));
RATES[14] = (ALGEBRAIC[10] - STATES[14])/ALGEBRAIC[23];
ALGEBRAIC[24] = 1.00000/( 0.118850*exp((STATES[0]+80.0000)/28.3700)+ 0.562300*exp((STATES[0]+80.0000)/- 14.1900));
ALGEBRAIC[12] = 1.00000/(1.00000+exp((STATES[0]+138.600)/10.4800));
RATES[16] = (ALGEBRAIC[12] - STATES[16])/ALGEBRAIC[24];
ALGEBRAIC[28] =  (( CONSTANTS[0]*CONSTANTS[1])/CONSTANTS[2])*log(CONSTANTS[17]/STATES[10]);
ALGEBRAIC[29] =  CONSTANTS[14]*STATES[11]*( CONSTANTS[15]*STATES[12]+ CONSTANTS[16]*STATES[13])*(STATES[0] - ALGEBRAIC[28]);
ALGEBRAIC[30] =  CONSTANTS[18]*STATES[14]*STATES[15]*(STATES[0] - ALGEBRAIC[28]);
ALGEBRAIC[31] = ( (48.0000/(exp((STATES[0]+37.0000)/25.0000)+exp((STATES[0]+37.0000)/- 25.0000))+10.0000)*0.00100000)/(1.00000+exp((STATES[0] - (ALGEBRAIC[28]+76.7700))/- 17.0000))+( CONSTANTS[19]*(STATES[0] - (ALGEBRAIC[28]+1.73000)))/( (1.00000+exp(( 1.61300*CONSTANTS[2]*(STATES[0] - (ALGEBRAIC[28]+1.73000)))/( CONSTANTS[0]*CONSTANTS[1])))*(1.00000+exp((CONSTANTS[17] - 0.998800)/- 0.124000)));
ALGEBRAIC[39] = (( (CONSTANTS[27]/(1.00000+ 0.124500*exp(( - 0.100000*STATES[0]*CONSTANTS[2])/( CONSTANTS[0]*CONSTANTS[1]))+ 0.0365000*CONSTANTS[68]*exp(( - STATES[0]*CONSTANTS[2])/( CONSTANTS[0]*CONSTANTS[1]))))*CONSTANTS[17])/(CONSTANTS[17]+CONSTANTS[28]))/(1.00000+pow(CONSTANTS[29]/STATES[1], 1.50000));
ALGEBRAIC[33] =  CONSTANTS[20]*STATES[16]*CONSTANTS[67]*(STATES[0] - ALGEBRAIC[28]);
ALGEBRAIC[37] =  CONSTANTS[24]*(STATES[0] - ALGEBRAIC[28]);
RATES[10] = - (ALGEBRAIC[30]+ALGEBRAIC[37]+ALGEBRAIC[29]+ALGEBRAIC[31]+ALGEBRAIC[33]+ ALGEBRAIC[39]*- 2.00000)/( CONSTANTS[56]*CONSTANTS[2]);
ALGEBRAIC[25] =  (( CONSTANTS[0]*CONSTANTS[1])/CONSTANTS[2])*log(CONSTANTS[10]/STATES[1]);
ALGEBRAIC[26] =  CONSTANTS[9]*pow(STATES[2], 3.00000)*STATES[3]*STATES[4]*(STATES[0] - ALGEBRAIC[25]);
ALGEBRAIC[27] =  CONSTANTS[11]*STATES[6]*( (0.900000+STATES[9]/10.0000)*STATES[7]+ (0.100000 - STATES[9]/10.0000)*STATES[8])*(STATES[0] - CONSTANTS[12]);
ALGEBRAIC[54] = 1.0/(1.0 + exp((36.0 - STATES[0])/6.1));
ALGEBRAIC[55] = 1.0/(1.0 + exp((66.0 + STATES[0])/6.0));
ALGEBRAIC[57] = 0.6 + 5.4/(1.0 + exp(0.03*(STATES[0]+100.0)));
ALGEBRAIC[58] = 1.0 + 40.0/(1.0 + exp(0.08*(STATES[0]+65)));
RATES[26] = (ALGEBRAIC[54] - STATES[26])/ALGEBRAIC[57];
RATES[27] = (ALGEBRAIC[55] - STATES[27])/ALGEBRAIC[58];
ALGEBRAIC[56] = CONSTANTS[69]*STATES[26]*STATES[27]*(STATES[0] - CONSTANTS[12] + 106.5);
ALGEBRAIC[32] =  CONSTANTS[20]*STATES[16]*CONSTANTS[21]*(STATES[0] - ALGEBRAIC[25]);
ALGEBRAIC[34] = ALGEBRAIC[32]+ALGEBRAIC[33];
ALGEBRAIC[35] =  CONSTANTS[22]*(STATES[0] - ALGEBRAIC[25]);
ALGEBRAIC[36] =  CONSTANTS[23]*(STATES[0] - CONSTANTS[25]);
ALGEBRAIC[38] = ALGEBRAIC[35]+ALGEBRAIC[36]+ALGEBRAIC[37];
ALGEBRAIC[41] = ( CONSTANTS[31]*( pow(STATES[1], 3.00000)*CONSTANTS[26]*exp( 0.0374300*STATES[0]*CONSTANTS[33]) -  pow(CONSTANTS[10], 3.00000)*STATES[17]*exp( 0.0374300*STATES[0]*(CONSTANTS[33] - 1.00000))))/(1.00000+ CONSTANTS[32]*( STATES[17]*pow(CONSTANTS[10], 3.00000)+ CONSTANTS[26]*pow(STATES[1], 3.00000)));
ALGEBRAIC[40] = ( CONSTANTS[30]*STATES[17])/(STATES[17]+0.000400000);
ALGEBRAIC[13] = (VOI>=CONSTANTS[4]&&VOI<=CONSTANTS[5]&&(VOI - CONSTANTS[4]) -  floor((VOI - CONSTANTS[4])/CONSTANTS[6])*CONSTANTS[6]<=CONSTANTS[7] ? CONSTANTS[8] : 0.00000);
RATES[0] = - (ALGEBRAIC[26]+ALGEBRAIC[27]+ALGEBRAIC[56]+ALGEBRAIC[29]+ALGEBRAIC[30]+ALGEBRAIC[34]+ALGEBRAIC[31]+ALGEBRAIC[38]+ALGEBRAIC[39]+ALGEBRAIC[41]+ALGEBRAIC[40]+ALGEBRAIC[13])/CONSTANTS[3];
RATES[1] = - (ALGEBRAIC[26]+ALGEBRAIC[35]+ ALGEBRAIC[41]*3.00000+ ALGEBRAIC[39]*3.00000+ALGEBRAIC[32])/( CONSTANTS[56]*CONSTANTS[2]);
ALGEBRAIC[43] = pow(STATES[17]/CONSTANTS[41], CONSTANTS[46]);
ALGEBRAIC[44] = pow(STATES[23]/CONSTANTS[42], CONSTANTS[47]);
ALGEBRAIC[45] = ( CONSTANTS[45]*( CONSTANTS[43]*ALGEBRAIC[43] -  CONSTANTS[44]*ALGEBRAIC[44]))/(1.00000+ALGEBRAIC[43]+ALGEBRAIC[44]);
ALGEBRAIC[47] = (STATES[23] - STATES[22])/CONSTANTS[48];
RATES[23] = ( ALGEBRAIC[45]*CONSTANTS[56])/CONSTANTS[58] - ( ALGEBRAIC[47]*CONSTANTS[57])/CONSTANTS[58];
ALGEBRAIC[48] =  CONSTANTS[52]*STATES[17]*(CONSTANTS[50] - STATES[24]) -  CONSTANTS[53]*STATES[24];
RATES[24] = ALGEBRAIC[48];
ALGEBRAIC[42] =  CONSTANTS[34]*(STATES[18]+STATES[19])*(STATES[22] - STATES[5]);
ALGEBRAIC[46] = (STATES[5] - STATES[17])/CONSTANTS[49];
ALGEBRAIC[49] = 1.00000/(1.00000+( CONSTANTS[63]*CONSTANTS[60])/pow(CONSTANTS[60]+STATES[5], 2.00000));
RATES[5] =  ALGEBRAIC[49]*((( ALGEBRAIC[42]*CONSTANTS[57])/CONSTANTS[59] - ( ALGEBRAIC[46]*CONSTANTS[56])/CONSTANTS[59]) - (ALGEBRAIC[27]+ALGEBRAIC[56])/( 2.00000*CONSTANTS[59]*CONSTANTS[2]));
ALGEBRAIC[50] = 1.00000/(1.00000+( CONSTANTS[64]*CONSTANTS[61])/pow(CONSTANTS[61]+STATES[22], 2.00000));
RATES[22] =  ALGEBRAIC[50]*(ALGEBRAIC[47] - ALGEBRAIC[42]);
ALGEBRAIC[51] =  CONSTANTS[54]*STATES[17]*(CONSTANTS[51] - STATES[25]) -  CONSTANTS[55]*STATES[25];
RATES[25] = ALGEBRAIC[51];
ALGEBRAIC[52] = ALGEBRAIC[48]+ALGEBRAIC[51];
ALGEBRAIC[53] = 1.00000/(1.00000+( CONSTANTS[63]*CONSTANTS[60])/pow(CONSTANTS[60]+STATES[17], 2.00000)+( CONSTANTS[65]*CONSTANTS[62])/pow(CONSTANTS[62]+STATES[17], 2.00000));
RATES[17] =  ALGEBRAIC[53]*(ALGEBRAIC[46] - (ALGEBRAIC[45]+ALGEBRAIC[52]+((ALGEBRAIC[36] -  2.00000*ALGEBRAIC[41])+ALGEBRAIC[40])/( 2.00000*CONSTANTS[56]*CONSTANTS[2])));
}
void
computeVariables(double VOI, double* CONSTANTS, double* RATES, double* STATES, double* ALGEBRAIC)
{
ALGEBRAIC[6] = 1.00000/(1.00000+STATES[5]/0.0100000);
ALGEBRAIC[11] = 1.00000/(1.00000+exp((STATES[0]+87.5000)/10.3000));
ALGEBRAIC[0] = 1.00000/(1.00000+exp((STATES[0]+45.0000)/- 6.50000));
ALGEBRAIC[14] = 0.00136000/(( 0.320000*(STATES[0]+47.1300))/(1.00000 - exp( - 0.100000*(STATES[0]+47.1300)))+ 0.0800000*exp(- STATES[0]/11.0000));
ALGEBRAIC[1] = 1.00000/(1.00000+exp((STATES[0]+76.1000)/6.07000));
ALGEBRAIC[15] = (STATES[0]>=- 40.0000 ?  0.000453700*(1.00000+exp(- (STATES[0]+10.6600)/11.1000)) : 0.00349000/( 0.135000*exp(- (STATES[0]+80.0000)/6.80000)+ 3.56000*exp( 0.0790000*STATES[0])+ 310000.*exp( 0.350000*STATES[0])));
ALGEBRAIC[2] = 1.00000/(1.00000+exp((STATES[0]+76.1000)/6.07000));
ALGEBRAIC[16] = (STATES[0]>=- 40.0000 ? ( 0.0116300*(1.00000+exp( - 0.100000*(STATES[0]+32.0000))))/exp( - 2.53500e-07*STATES[0]) : 0.00349000/( ((STATES[0]+37.7800)/(1.00000+exp( 0.311000*(STATES[0]+79.2300))))*( - 127140.*exp( 0.244400*STATES[0]) -  3.47400e-05*exp( - 0.0439100*STATES[0]))+( 0.121200*exp( - 0.0105200*STATES[0]))/(1.00000+exp( - 0.137800*(STATES[0]+40.1400)))));
ALGEBRAIC[3] = 1.00000/(1.00000+exp((STATES[0]+15.3000)/- 5.00000));
ALGEBRAIC[17] =  0.00305000*exp( - 0.00450000*pow(STATES[0]+7.00000, 2.00000))+ 0.00105000*exp( - 0.00200000*pow(STATES[0] - 18.0000, 2.00000))+0.000250000;
ALGEBRAIC[4] = 1.00000/(1.00000+exp((STATES[0]+26.7000)/5.40000));
ALGEBRAIC[18] =  0.105000*exp(- pow((STATES[0]+45.0000)/12.0000, 2.00000))+0.0400000/(1.00000+exp((- STATES[0]+25.0000)/25.0000))+0.0150000/(1.00000+exp((STATES[0]+75.0000)/25.0000))+0.00170000;
ALGEBRAIC[5] = 1.00000/(1.00000+exp((STATES[0]+26.7000)/5.40000));
ALGEBRAIC[19] =  0.0410000*exp(- pow((STATES[0]+47.0000)/12.0000, 2.00000))+0.0800000/(1.00000+exp((STATES[0]+55.0000)/- 5.00000))+0.0150000/(1.00000+exp((STATES[0]+75.0000)/25.0000))+0.00170000;
ALGEBRAIC[20] = 1.00000/( 45.1600*exp( 0.0357700*(STATES[0]+50.0000))+ 98.9000*exp( - 0.100000*(STATES[0]+38.0000)));
ALGEBRAIC[7] = 1.00000/(1.00000+exp((STATES[0]+10.6000)/- 11.4200));
ALGEBRAIC[21] =  0.350000*exp(- pow((STATES[0]+70.0000)/15.0000, 2.00000))+0.0350000;
ALGEBRAIC[8] = 1.00000/(1.00000+exp((STATES[0]+45.3000)/6.88410));
ALGEBRAIC[22] =  3.70000*exp(- pow((STATES[0]+70.0000)/30.0000, 2.00000))+0.0350000;
ALGEBRAIC[9] = 1.00000/(1.00000+exp((STATES[0]+45.3000)/6.88410));
ALGEBRAIC[23] = 10.0000/( 45.1600*exp( 0.0357700*(STATES[0]+50.0000))+ 98.9000*exp( - 0.100000*(STATES[0]+38.0000)));
ALGEBRAIC[10] = 1.00000/(1.00000+exp((STATES[0]+11.5000)/- 11.8200));
ALGEBRAIC[24] = 1.00000/( 0.118850*exp((STATES[0]+80.0000)/28.3700)+ 0.562300*exp((STATES[0]+80.0000)/- 14.1900));
ALGEBRAIC[12] = 1.00000/(1.00000+exp((STATES[0]+138.600)/10.4800));
ALGEBRAIC[28] =  (( CONSTANTS[0]*CONSTANTS[1])/CONSTANTS[2])*log(CONSTANTS[17]/STATES[10]);
ALGEBRAIC[29] =  CONSTANTS[14]*STATES[11]*( CONSTANTS[15]*STATES[12]+ CONSTANTS[16]*STATES[13])*(STATES[0] - ALGEBRAIC[28]);
ALGEBRAIC[30] =  CONSTANTS[18]*STATES[14]*STATES[15]*(STATES[0] - ALGEBRAIC[28]);
ALGEBRAIC[31] = ( (48.0000/(exp((STATES[0]+37.0000)/25.0000)+exp((STATES[0]+37.0000)/- 25.0000))+10.0000)*0.00100000)/(1.00000+exp((STATES[0] - (ALGEBRAIC[28]+76.7700))/- 17.0000))+( CONSTANTS[19]*(STATES[0] - (ALGEBRAIC[28]+1.73000)))/( (1.00000+exp(( 1.61300*CONSTANTS[2]*(STATES[0] - (ALGEBRAIC[28]+1.73000)))/( CONSTANTS[0]*CONSTANTS[1])))*(1.00000+exp((CONSTANTS[17] - 0.998800)/- 0.124000)));
ALGEBRAIC[39] = (( (CONSTANTS[27]/(1.00000+ 0.124500*exp(( - 0.100000*STATES[0]*CONSTANTS[2])/( CONSTANTS[0]*CONSTANTS[1]))+ 0.0365000*CONSTANTS[68]*exp(( - STATES[0]*CONSTANTS[2])/( CONSTANTS[0]*CONSTANTS[1]))))*CONSTANTS[17])/(CONSTANTS[17]+CONSTANTS[28]))/(1.00000+pow(CONSTANTS[29]/STATES[1], 1.50000));
ALGEBRAIC[33] =  CONSTANTS[20]*STATES[16]*CONSTANTS[67]*(STATES[0] - ALGEBRAIC[28]);
ALGEBRAIC[37] =  CONSTANTS[24]*(STATES[0] - ALGEBRAIC[28]);
ALGEBRAIC[25] =  (( CONSTANTS[0]*CONSTANTS[1])/CONSTANTS[2])*log(CONSTANTS[10]/STATES[1]);
ALGEBRAIC[26] =  CONSTANTS[9]*pow(STATES[2], 3.00000)*STATES[3]*STATES[4]*(STATES[0] - ALGEBRAIC[25]);
ALGEBRAIC[27] =  CONSTANTS[11]*STATES[6]*( (0.900000+STATES[9]/10.0000)*STATES[7]+ (0.100000 - STATES[9]/10.0000)*STATES[8])*(STATES[0] - CONSTANTS[12]);
ALGEBRAIC[32] =  CONSTANTS[20]*STATES[16]*CONSTANTS[21]*(STATES[0] - ALGEBRAIC[25]);
ALGEBRAIC[34] = ALGEBRAIC[32]+ALGEBRAIC[33];
ALGEBRAIC[35] =  CONSTANTS[22]*(STATES[0] - ALGEBRAIC[25]);
ALGEBRAIC[36] =  CONSTANTS[23]*(STATES[0] - CONSTANTS[25]);
ALGEBRAIC[38] = ALGEBRAIC[35]+ALGEBRAIC[36]+ALGEBRAIC[37];
ALGEBRAIC[41] = ( CONSTANTS[31]*( pow(STATES[1], 3.00000)*CONSTANTS[26]*exp( 0.0374300*STATES[0]*CONSTANTS[33]) -  pow(CONSTANTS[10], 3.00000)*STATES[17]*exp( 0.0374300*STATES[0]*(CONSTANTS[33] - 1.00000))))/(1.00000+ CONSTANTS[32]*( STATES[17]*pow(CONSTANTS[10], 3.00000)+ CONSTANTS[26]*pow(STATES[1], 3.00000)));
ALGEBRAIC[40] = ( CONSTANTS[30]*STATES[17])/(STATES[17]+0.000400000);
ALGEBRAIC[13] = (VOI>=CONSTANTS[4]&&VOI<=CONSTANTS[5]&&(VOI - CONSTANTS[4]) -  floor((VOI - CONSTANTS[4])/CONSTANTS[6])*CONSTANTS[6]<=CONSTANTS[7] ? CONSTANTS[8] : 0.00000);
ALGEBRAIC[43] = pow(STATES[17]/CONSTANTS[41], CONSTANTS[46]);
ALGEBRAIC[44] = pow(STATES[23]/CONSTANTS[42], CONSTANTS[47]);
ALGEBRAIC[45] = ( CONSTANTS[45]*( CONSTANTS[43]*ALGEBRAIC[43] -  CONSTANTS[44]*ALGEBRAIC[44]))/(1.00000+ALGEBRAIC[43]+ALGEBRAIC[44]);
ALGEBRAIC[47] = (STATES[23] - STATES[22])/CONSTANTS[48];
ALGEBRAIC[48] =  CONSTANTS[52]*STATES[17]*(CONSTANTS[50] - STATES[24]) -  CONSTANTS[53]*STATES[24];
ALGEBRAIC[42] =  CONSTANTS[34]*(STATES[18]+STATES[19])*(STATES[22] - STATES[5]);
ALGEBRAIC[46] = (STATES[5] - STATES[17])/CONSTANTS[49];
ALGEBRAIC[49] = 1.00000/(1.00000+( CONSTANTS[63]*CONSTANTS[60])/pow(CONSTANTS[60]+STATES[5], 2.00000));
ALGEBRAIC[50] = 1.00000/(1.00000+( CONSTANTS[64]*CONSTANTS[61])/pow(CONSTANTS[61]+STATES[22], 2.00000));
ALGEBRAIC[51] = CONSTANTS[54]*STATES[17]*(CONSTANTS[51] - STATES[25]) -  CONSTANTS[55]*STATES[25];
ALGEBRAIC[52] = ALGEBRAIC[48]+ALGEBRAIC[51];
ALGEBRAIC[53] = 1.00000/(1.00000+( CONSTANTS[63]*CONSTANTS[60])/pow(CONSTANTS[60]+STATES[17], 2.00000)+( CONSTANTS[65]*CONSTANTS[62])/pow(CONSTANTS[62]+STATES[17], 2.00000));
ALGEBRAIC[54] = 1.0/(1.0 + exp((36.0 - STATES[0])/6.1));
ALGEBRAIC[55] = 1.0/(1.0 + exp((66.0 + STATES[0])/6.0));
ALGEBRAIC[56] = CONSTANTS[69]*STATES[26]*STATES[27]*(STATES[0] - CONSTANTS[12] + 106.5);
ALGEBRAIC[57] = 0.6 + 5.4/(1.0 + exp(0.03*(STATES[0]+100.0)));
ALGEBRAIC[58] = 1.0 + 40.0/(1.0 + exp(0.08*(STATES[0]+65)));
}

int main(void){
  double CONSTANTS[70], RATES[28], STATES[28], ALGEBRAIC[59],VOI,start, end, step;
  FILE *file;
  FILE *logfile;
  start = 0.0;
  end = 0.01;
  step = 0.0000001;
  int N = (end-start)/step;
  printf("%i", N);

  int halt = 0;
  //initConsts(CONSTANTS,RATES,STATES);
  initFromFile("config.txt", CONSTANTS, RATES, STATES);
  file = fopen("test2withalgebraic.csv","w");
  fprintf(file,"T\tV\n");


  VOI = start;
  for (int i = 0; i < N; i++){
    VOI += step;
    //fprintf(file,"%f,",VOI);
    computeRates(VOI,CONSTANTS,RATES,STATES,ALGEBRAIC);
    for (int k = 0; k < 26; k = k+1){
      if (isnan(RATES[k])){
        logfile = fopen("log.txt","w");
        for (int k = 0; k < 26; k++){
          fprintf(logfile, "%f\t%f\n", STATES[k], RATES[k]);
        }
        fclose(logfile);
        halt = 1;
        
      }
      STATES[k]+=RATES[k]*step;
    }
    //computeVariables(VOI,CONSTANTS,RATES,STATES,ALGEBRAIC);
    if(i%10000 == 0)
    {
      fprintf(file,"%f\t%f\n", VOI, STATES[0]);
    }
    if(halt){
      printf("%f",VOI);
      break;
    }
  }
  computeVariables(VOI,CONSTANTS,RATES,STATES,ALGEBRAIC);
  //printf("ne ok %f,%f,%f\n ", RATES[0],STATES[0],ALGEBRAIC[5]);
  fclose(file);
  printf("a");
  
  return 0;
}
