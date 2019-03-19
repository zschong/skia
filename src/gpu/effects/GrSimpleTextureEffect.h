/*
 * Copyright 2017 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

/**************************************************************************************************
 *** This file was autogenerated from GrSimpleTextureEffect.fp; do not modify.
 **************************************************************************************************/
#ifndef GrSimpleTextureEffect_DEFINED
#define GrSimpleTextureEffect_DEFINED
#include "SkTypes.h"
#include "GrFragmentProcessor.h"
#include "GrCoordTransform.h"
class GrSimpleTextureEffect : public GrFragmentProcessor {
public:
    const SkMatrix44& matrix() const { return fMatrix; }

    static std::unique_ptr<GrFragmentProcessor> Make(sk_sp<GrTextureProxy> proxy,
                                                     const SkMatrix&       matrix) {
        return std::unique_ptr<GrFragmentProcessor>(
                new GrSimpleTextureEffect(std::move(proxy),
                                          matrix,
                                          GrSamplerState(GrSamplerState::WrapMode::kClamp,
                                                         GrSamplerState::Filter::kNearest)));
    }

    /* clamp mode */
    static std::unique_ptr<GrFragmentProcessor> Make(sk_sp<GrTextureProxy>  proxy,
                                                     const SkMatrix&        matrix,
                                                     GrSamplerState::Filter filter) {
        return std::unique_ptr<GrFragmentProcessor>(new GrSimpleTextureEffect(
                std::move(proxy),
                matrix,
                GrSamplerState(GrSamplerState::WrapMode::kClamp, filter)));
    }

    static std::unique_ptr<GrFragmentProcessor> Make(sk_sp<GrTextureProxy> proxy,
                                                     const SkMatrix&       matrix,
                                                     const GrSamplerState& p) {
        return std::unique_ptr<GrFragmentProcessor>(
                new GrSimpleTextureEffect(std::move(proxy), matrix, p));
    }
    GrSimpleTextureEffect(const GrSimpleTextureEffect& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char*                          name() const override { return "SimpleTextureEffect"; }

private:
    GrSimpleTextureEffect(sk_sp<GrTextureProxy> image,
                          SkMatrix44            matrix,
                          GrSamplerState        samplerParams)
            : INHERITED(kGrSimpleTextureEffect_ClassID,
                        (OptimizationFlags)ModulateForSamplerOptFlags(
                                image->config(),
                                samplerParams.wrapModeX() ==
                                                GrSamplerState::WrapMode::kClampToBorder ||
                                        samplerParams.wrapModeY() ==
                                                GrSamplerState::WrapMode::kClampToBorder))
            , fImage(std::move(image), samplerParams)
            , fMatrix(matrix)
            , fImageCoordTransform(matrix, fImage.proxy()) {
        this->setTextureSamplerCnt(1);
        this->addCoordTransform(&fImageCoordTransform);
    }
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
    const TextureSampler& onTextureSampler(int) const override;
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    TextureSampler              fImage;
    SkMatrix44                  fMatrix;
    GrCoordTransform            fImageCoordTransform;
    typedef GrFragmentProcessor INHERITED;
};
#endif
