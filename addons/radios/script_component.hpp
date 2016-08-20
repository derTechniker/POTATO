#define COMPONENT radios
#include "\z\potato\addons\core\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define CBA_DEBUG_SYNCHRONOUS

#ifdef DEBUG_ENABLED_RADIOS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_RADIOS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_RADIOS
#endif

#include "\z\potato\addons\core\script_macros.hpp"

// ACRE functions
#define ACRE_FUNC(var1) DOUBLES(acre_api_fnc,var1)
#define ACRE_QFUNC(var1) QUOTE(DOUBLES(acre_api_fnc,var1))

// Display defines
#define RADIO_SET_IDC 413265
#define RADIO_CHOOSE_IDC 141722
#define RADIO_CHANNEL_IDC 958093

#define BABEL_LIST_IDC 464541

#define CFG_S_SIDE_IDC 200679
#define CFG_S_CHANNEL_IDC 394038
#define CFG_S_SHARED_MR 164300
#define CFG_S_SHARED_LR 941575

#define CFG_G_SET_IDC 204468
#define CFG_G_RI_IDC 246781
#define CFG_G_OMNI_IDC 279021
#define CFG_G_TI_SLIDER_IDC 362424
#define CFG_G_TI_EDIT_IDC 377569
#define CFG_G_CC_NAME_IDC 389742
#define CFG_G_CC_NUMBER_IDC 722725
#define CFG_G_CC_MR_IDC 974122
#define CFG_G_CC_LR_IDC 981063