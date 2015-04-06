//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoPassTextureSamplingFilter.h"

@interface GPUImageLanczosResamplingFilter : GPUImageTwoPassTextureSamplingFilter
{
    struct CGSize _originalImageSize;
}

@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize=_originalImageSize;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (id)init;

@end

