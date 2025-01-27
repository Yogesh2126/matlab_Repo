/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Mon Aug 30 11:12:21 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External inputs (root inport signals with default storage) */
ExtU_untitled_T untitled_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* Sum: '<S1>/Add' incorporates:
   *  Inport: '<Root>/Input'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  untitled_DW.UnitDelay_DSTATE += untitled_U.Input;

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S2>/Constant'
   *  RelationalOperator: '<S2>/Compare'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  if (!(untitled_DW.UnitDelay_DSTATE <= 5.0)) {
    untitled_DW.UnitDelay_DSTATE = 0.0;
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/Output' incorporates:
   *  UnitDelay: '<S1>/Unit Delay'
   */
  untitled_Y.Output = untitled_DW.UnitDelay_DSTATE;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* external inputs */
  untitled_U.Input = 0.0;

  /* external outputs */
  untitled_Y.Output = 0.0;

  /* SystemInitialize for Atomic SubSystem: '<Root>/Subsystem' */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  untitled_DW.UnitDelay_DSTATE = -1.0;

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
