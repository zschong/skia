/*
 * Copyright 2018 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/**************************************************************************************************
 *** This file was autogenerated from GrUnrolledBinaryGradientColorizer.fp; do not modify.
 **************************************************************************************************/
#ifndef GrUnrolledBinaryGradientColorizer_DEFINED
#define GrUnrolledBinaryGradientColorizer_DEFINED
#include "SkTypes.h"
#include "GrFragmentProcessor.h"
#include "GrCoordTransform.h"
class GrUnrolledBinaryGradientColorizer : public GrFragmentProcessor {
public:
    static const int   kMaxColorCount = 16;
    int32_t            intervalCount() const { return fIntervalCount; }
    const SkPMColor4f& scale0_1() const { return fScale0_1; }
    const SkPMColor4f& scale2_3() const { return fScale2_3; }
    const SkPMColor4f& scale4_5() const { return fScale4_5; }
    const SkPMColor4f& scale6_7() const { return fScale6_7; }
    const SkPMColor4f& scale8_9() const { return fScale8_9; }
    const SkPMColor4f& scale10_11() const { return fScale10_11; }
    const SkPMColor4f& scale12_13() const { return fScale12_13; }
    const SkPMColor4f& scale14_15() const { return fScale14_15; }
    const SkPMColor4f& bias0_1() const { return fBias0_1; }
    const SkPMColor4f& bias2_3() const { return fBias2_3; }
    const SkPMColor4f& bias4_5() const { return fBias4_5; }
    const SkPMColor4f& bias6_7() const { return fBias6_7; }
    const SkPMColor4f& bias8_9() const { return fBias8_9; }
    const SkPMColor4f& bias10_11() const { return fBias10_11; }
    const SkPMColor4f& bias12_13() const { return fBias12_13; }
    const SkPMColor4f& bias14_15() const { return fBias14_15; }
    const SkRect&      thresholds1_7() const { return fThresholds1_7; }
    const SkRect&      thresholds9_13() const { return fThresholds9_13; }

    static std::unique_ptr<GrFragmentProcessor> Make(const SkPMColor4f* colors,
                                                     const SkScalar*    positions,
                                                     int                count);
    GrUnrolledBinaryGradientColorizer(const GrUnrolledBinaryGradientColorizer& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "UnrolledBinaryGradientColorizer"; }

private:
    GrUnrolledBinaryGradientColorizer(int32_t     intervalCount,
                                      SkPMColor4f scale0_1,
                                      SkPMColor4f scale2_3,
                                      SkPMColor4f scale4_5,
                                      SkPMColor4f scale6_7,
                                      SkPMColor4f scale8_9,
                                      SkPMColor4f scale10_11,
                                      SkPMColor4f scale12_13,
                                      SkPMColor4f scale14_15,
                                      SkPMColor4f bias0_1,
                                      SkPMColor4f bias2_3,
                                      SkPMColor4f bias4_5,
                                      SkPMColor4f bias6_7,
                                      SkPMColor4f bias8_9,
                                      SkPMColor4f bias10_11,
                                      SkPMColor4f bias12_13,
                                      SkPMColor4f bias14_15,
                                      SkRect      thresholds1_7,
                                      SkRect      thresholds9_13)
            : INHERITED(kGrUnrolledBinaryGradientColorizer_ClassID, kNone_OptimizationFlags)
            , fIntervalCount(intervalCount)
            , fScale0_1(scale0_1)
            , fScale2_3(scale2_3)
            , fScale4_5(scale4_5)
            , fScale6_7(scale6_7)
            , fScale8_9(scale8_9)
            , fScale10_11(scale10_11)
            , fScale12_13(scale12_13)
            , fScale14_15(scale14_15)
            , fBias0_1(bias0_1)
            , fBias2_3(bias2_3)
            , fBias4_5(bias4_5)
            , fBias6_7(bias6_7)
            , fBias8_9(bias8_9)
            , fBias10_11(bias10_11)
            , fBias12_13(bias12_13)
            , fBias14_15(bias14_15)
            , fThresholds1_7(thresholds1_7)
            , fThresholds9_13(thresholds9_13) {}
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    int32_t                     fIntervalCount;
    SkPMColor4f                 fScale0_1;
    SkPMColor4f                 fScale2_3;
    SkPMColor4f                 fScale4_5;
    SkPMColor4f                 fScale6_7;
    SkPMColor4f                 fScale8_9;
    SkPMColor4f                 fScale10_11;
    SkPMColor4f                 fScale12_13;
    SkPMColor4f                 fScale14_15;
    SkPMColor4f                 fBias0_1;
    SkPMColor4f                 fBias2_3;
    SkPMColor4f                 fBias4_5;
    SkPMColor4f                 fBias6_7;
    SkPMColor4f                 fBias8_9;
    SkPMColor4f                 fBias10_11;
    SkPMColor4f                 fBias12_13;
    SkPMColor4f                 fBias14_15;
    SkRect                      fThresholds1_7;
    SkRect                      fThresholds9_13;
    typedef GrFragmentProcessor INHERITED;
};
#endif
