//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageDirectionalNonMaximumSuppressionFilter : GPUImageFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    int upperThresholdUniform;
    int lowerThresholdUniform;
    BOOL hasOverriddenImageSizeFactor;
    float _texelWidth;
    float _texelHeight;
    float _upperThreshold;
    float _lowerThreshold;
}

@property(nonatomic) float lowerThreshold; // @synthesize lowerThreshold=_lowerThreshold;
@property(nonatomic) float upperThreshold; // @synthesize upperThreshold=_upperThreshold;
@property(nonatomic) float texelHeight; // @synthesize texelHeight=_texelHeight;
@property(nonatomic) float texelWidth; // @synthesize texelWidth=_texelWidth;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)init;

@end

