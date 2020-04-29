#include "KelpieAudioManager.h"

KelpieAudioManager::KelpieAudioManager() : patchCord1(V8_N, 0, V8_MIX, 2),
                                           patchCord2(V6_B, 0, V6_MIX, 1),
                                           patchCord3(V6_A, 0, V6_MIX, 0),
                                           patchCord4(V7_N, 0, V7_MIX, 2),
                                           patchCord5(V8_B, 0, V8_MIX, 1),
                                           patchCord6(V6_N, 0, V6_MIX, 2),
                                           patchCord7(V7_A, 0, V7_MIX, 0),
                                           patchCord8(V7_B, 0, V7_MIX, 1),
                                           patchCord9(V8_A, 0, V8_MIX, 0),
                                           patchCord10(V5_B, 0, V5_MIX, 1),
                                           patchCord11(V3_A, 0, V3_MIX, 0),
                                           patchCord12(V5_A, 0, V5_MIX, 0),
                                           patchCord13(V2_N, 0, V2_MIX, 2),
                                           patchCord14(V3_B, 0, V3_MIX, 1),
                                           patchCord15(V3_N, 0, V3_MIX, 2),
                                           patchCord16(V2_B, 0, V2_MIX, 1),
                                           patchCord17(V1_N, 0, V1_MIX, 2),
                                           patchCord18(V4_A, 0, V4_MIX, 0),
                                           patchCord19(V4_B, 0, V4_MIX, 1),
                                           patchCord20(V2_A, 0, V2_MIX, 0),
                                           patchCord21(V5_N, 0, V5_MIX, 2),
                                           patchCord22(V1_B, 0, V1_MIX, 1),
                                           patchCord23(V4_N, 0, V4_MIX, 2),
                                           patchCord24(V1_A, 0, V1_MIX, 0),
                                           patchCord25(DC_OFFSET, V1_FILT_ENV),
                                           patchCord26(DC_OFFSET, V2_FILT_ENV),
                                           patchCord27(DC_OFFSET, V3_FILT_ENV),
                                           patchCord28(DC_OFFSET, V4_FILT_ENV),
                                           patchCord29(DC_OFFSET, V5_FILT_ENV),
                                           patchCord30(DC_OFFSET, V6_FILT_ENV),
                                           patchCord31(DC_OFFSET, V7_FILT_ENV),
                                           patchCord32(DC_OFFSET, V8_FILT_ENV),
                                           patchCord33(DC_OFFSET, 0, LFO_MIXER_FILTER, 0),
                                           patchCord34(DC_OFFSET, 0, LFO_MIXER_AMP, 0),
                                           patchCord35(V3_MIX, V3_AMP),
                                           patchCord36(V8_MIX, V8_AMP),
                                           patchCord37(V5_MIX, V5_AMP),
                                           patchCord38(V7_MIX, V7_AMP),
                                           patchCord39(V6_MIX, V6_AMP),
                                           patchCord40(V4_MIX, V4_AMP),
                                           patchCord41(V1_MIX, V1_AMP),
                                           patchCord42(V2_MIX, V2_AMP),
                                           patchCord43(LFO, 0, LFO_MIXER_FILTER, 1),
                                           patchCord44(LFO, 0, LFO_MIXER_AMP, 1),
                                           patchCord45(V7_FILT_ENV, 0, MULT_7, 1),
                                           patchCord46(V6_FILT_ENV, 0, MULT_6, 1),
                                           patchCord47(V8_FILT_ENV, 0, MULT_8, 1),
                                           patchCord48(V8_AMP, 0, V8_FILT, 0),
                                           patchCord49(V5_AMP, 0, V5_FILT, 0),
                                           patchCord50(V7_AMP, 0, V7_FILT, 0),
                                           patchCord51(V3_FILT_ENV, 0, MULT_3, 1),
                                           patchCord52(V5_FILT_ENV, 0, MULT_5, 1),
                                           patchCord53(V6_AMP, 0, V6_FILT, 0),
                                           patchCord54(LFO_MIXER_FILTER, 0, MULT_1, 0),
                                           patchCord55(LFO_MIXER_FILTER, 0, MULT_2, 0),
                                           patchCord56(LFO_MIXER_FILTER, 0, MULT_3, 0),
                                           patchCord57(LFO_MIXER_FILTER, 0, MULT_4, 0),
                                           patchCord58(LFO_MIXER_FILTER, 0, MULT_5, 0),
                                           patchCord59(LFO_MIXER_FILTER, 0, MULT_6, 0),
                                           patchCord60(LFO_MIXER_FILTER, 0, MULT_7, 0),
                                           patchCord61(LFO_MIXER_FILTER, 0, MULT_8, 0),
                                           patchCord62(V2_AMP, 0, V2_FILT, 0),
                                           patchCord63(V4_AMP, 0, V4_FILT, 0),
                                           patchCord64(V4_FILT_ENV, 0, MULT_4, 1),
                                           patchCord65(V3_AMP, 0, V3_FILT, 0),
                                           patchCord66(V1_AMP, 0, V1_FILT, 0),
                                           patchCord67(V2_FILT_ENV, 0, MULT_2, 1),
                                           patchCord68(V1_FILT_ENV, 0, MULT_1, 1),
                                           patchCord69(MULT_7, 0, V7_FILT, 1),
                                           patchCord70(MULT_8, 0, V8_FILT, 1),
                                           patchCord71(MULT_3, 0, V3_FILT, 1),
                                           patchCord72(MULT_6, 0, V6_FILT, 1),
                                           patchCord73(MULT_5, 0, V5_FILT, 1),
                                           patchCord74(MULT_1, 0, V1_FILT, 1),
                                           patchCord75(MULT_4, 0, V4_FILT, 1),
                                           patchCord76(MULT_2, 0, V2_FILT, 1),
                                           patchCord77(V7_FILT, 0, V7_ENV, 0),
                                           patchCord78(V3_FILT, 0, V3_ENV, 0),
                                           patchCord79(V2_FILT, 0, V2_ENV, 0),
                                           patchCord80(V6_FILT, 0, V6_ENV, 0),
                                           patchCord81(V8_FILT, 0, V8_ENV, 0),
                                           patchCord82(V1_FILT, 0, V1_ENV, 0),
                                           patchCord83(V4_FILT, 0, V4_ENV, 0),
                                           patchCord84(V5_FILT, 0, V5_ENV, 0),
                                           patchCord85(V1_ENV, 0, V14_MIX, 0),
                                           patchCord86(V2_ENV, 0, V14_MIX, 1),
                                           patchCord87(V6_ENV, 0, V58_MIX, 1),
                                           patchCord88(V7_ENV, 0, V58_MIX, 2),
                                           patchCord89(V3_ENV, 0, V14_MIX, 2),
                                           patchCord90(V5_ENV, 0, V58_MIX, 0),
                                           patchCord91(V4_ENV, 0, V14_MIX, 3),
                                           patchCord92(V8_ENV, 0, V58_MIX, 3),
                                           patchCord93(V14_MIX, 0, ALL_VOICE_MIX, 0),
                                           patchCord94(V58_MIX, 0, ALL_VOICE_MIX, 1),
                                           patchCord95(ALL_VOICE_MIX, 0, LFO_AMP, 1),
                                           patchCord96(LFO_MIXER_AMP, 0, LFO_AMP, 0),
                                           patchCord97(LFO_AMP, MASTER_GAIN),
                                           patchCord98(MASTER_GAIN, 0, i2s1, 0),
                                           patchCord99(MASTER_GAIN, 0, i2s1, 1),
                                           patchCord100(MASTER_GAIN, PEAK)
{
}

void KelpieAudioManager::init(float masterVol)
{
  AudioMemory(80);
  sgtl5000_1.enable();
  sgtl5000_1.volume(masterVol);

  DC_OFFSET.amplitude(1.0);
  LFO.amplitude(1.0);
  LFO.frequency(2.0);
  LFO.phase(90);

  LFO_MIXER_FILTER.gain(0, 1); // THIS IS THE AMP THAT ADJUSTS HOW MUCH OF THE LFO IS FED INTO THE FILTER
  LFO_MIXER_FILTER.gain(1, 0);

  for (byte i = 0; i < 4; i++)
  {
    V14_MIX.gain(i, 0.25);
    V58_MIX.gain(i, 0.25);
  }

  ALL_VOICE_MIX.gain(0, 0.5);
  ALL_VOICE_MIX.gain(1, 0.5);
}