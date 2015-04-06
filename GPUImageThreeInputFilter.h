//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@class GPUImageFramebuffer;

@interface GPUImageThreeInputFilter : GPUImageTwoInputFilter
{
    GPUImageFramebuffer *thirdInputFramebuffer;
    int filterThirdTextureCoordinateAttribute;
    int filterInputTextureUniform3;
    int inputRotation3;
    unsigned int filterSourceTexture3;
    CDStruct_1b6d18a9 thirdFrameTime;
    BOOL hasSetSecondTexture;
    BOOL hasReceivedThirdFrame;
    BOOL thirdFrameWasVideo;
    BOOL thirdFrameCheckDisabled;
}

- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(int)arg2;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(int)arg2;
- (void)setInputRotation:(int)arg1 atIndex:(int)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(int)arg2;
- (int)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)disableThirdFrameCheck;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

