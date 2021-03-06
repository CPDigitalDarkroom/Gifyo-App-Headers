//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageOutput.h"

@interface GPUImagePicture : GPUImageOutput
{
    struct CGSize pixelSizeOfImage;
    BOOL hasProcessedImage;
    struct dispatch_semaphore_s *imageUpdateSemaphore;
}

- (void)addTarget:(id)arg1 atTextureLocation:(int)arg2;
- (struct CGSize)outputImageSize;
- (void)processImageUpToFilter:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)processImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processImage;
- (void)removeAllTargets;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 smoothlyScaleOutput:(BOOL)arg2;
- (id)initWithImage:(id)arg1 smoothlyScaleOutput:(BOOL)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;

@end

