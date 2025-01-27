/*
 * File: Assignment4.c
 *
 * Code generated for Simulink model 'Assignment4'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Mon Aug 30 10:36:23 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Assignment4.h"
#include "Assignment4_private.h"

/* Block states (default storage) */
DW_Assignment4_T Assignment4_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Assignment4_T Assignment4_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Assignment4_T Assignment4_Y;

/* Real-time model */
RT_MODEL_Assignment4_T Assignment4_M_;
RT_MODEL_Assignment4_T *const Assignment4_M = &Assignment4_M_;

/* Model step function */
void Assignment4_step(void)
{
  real_T rtb_Add;
  real_T rtb_UnitDelay1;

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* UnitDelay: '<S1>/Unit Delay1' */
  rtb_UnitDelay1 = Assignment4_DW.UnitDelay1_DSTATE;

  /* Sum: '<S1>/Add' incorporates:
   *  Inport: '<Root>/Input'
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  rtb_Add = Assignment4_U.Input + Assignment4_DW.UnitDelay1_DSTATE;

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S3>/Constant'
   *  RelationalOperator: '<S3>/Compare'
   *  Sum: '<S1>/Add1'
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  if (Assignment4_DW.UnitDelay2_DSTATE - 1.0 >= -5.0) {
    Assignment4_DW.UnitDelay2_DSTATE--;
  } else {
    Assignment4_DW.UnitDelay2_DSTATE = 0.0;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S2>/Constant'
   *  Logic: '<S1>/AND'
   *  RelationalOperator: '<S1>/Relational Operator'
   *  RelationalOperator: '<S2>/Compare'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S1>/Unit Delay1'
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  if ((rtb_Add <= 5.0) && (Assignment4_DW.UnitDelay1_DSTATE >
       Assignment4_DW.UnitDelay_DSTATE)) {
    Assignment4_DW.UnitDelay1_DSTATE = rtb_Add;
  } else {
    Assignment4_DW.UnitDelay1_DSTATE = Assignment4_DW.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Assignment4_DW.UnitDelay_DSTATE = rtb_UnitDelay1;

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/Output' incorporates:
   *  UnitDelay: '<S1>/Unit Delay1'
   */
  Assignment4_Y.Output = Assignment4_DW.UnitDelay1_DSTATE;
}

/* Model initialize function */
void Assignment4_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Assignment4_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&Assignment4_DW, 0,
                sizeof(DW_Assignment4_T));

  /* external inputs */
  Assignment4_U.Input = 0.0;

  /* external outputs */
  Assignment4_Y.Output = 0.0;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
  Assignment4_DW.UnitDelay1_DSTATE = -1.0;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Assignment4_DW.UnitDelay_DSTATE = -1.0;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
  Assignment4_DW.UnitDelay2_DSTATE = 1.0;

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */
}

/* Model terminate function */
void Assignment4_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
