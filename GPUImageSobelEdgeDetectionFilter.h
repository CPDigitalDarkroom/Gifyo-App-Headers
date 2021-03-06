//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoPassFilter.h"

@interface GPUImageSobelEdgeDetectionFilter : GPUImageTwoPassFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    int edgeStrengthUniform;
    BOOL hasOverriddenImageSizeFactor;
    float _texelWidth;
    float _texelHeight;
    float _edgeStrength;
}

@property(nonatomic) float edgeStrength; // @synthesize edgeStrength=_edgeStrength;
@property(nonatomic) float texelHeight; // @synthesize texelHeight=_texelHeight;
@property(nonatomic) float texelWidth; // @synthesize texelWidth=_texelWidth;
- (BOOL)providesMonochromeOutput;
- (BOOL)wantsMonochromeInput;
- (void)setUniformsForProgramAtIndex:(unsigned int)arg1;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

