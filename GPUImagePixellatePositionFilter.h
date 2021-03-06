//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImagePixellatePositionFilter : GPUImageFilter
{
    int fractionalWidthOfAPixelUniform;
    int aspectRatioUniform;
    int centerUniform;
    int radiusUniform;
    float _fractionalWidthOfAPixel;
    float _aspectRatio;
    float _radius;
    struct CGPoint _center;
}

@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) float fractionalWidthOfAPixel; // @synthesize fractionalWidthOfAPixel=_fractionalWidthOfAPixel;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)adjustAspectRatio;
- (void)setInputRotation:(int)arg1 atIndex:(int)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)init;

@end

