//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageColorPackingFilter : GPUImageFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    float texelWidth;
    float texelHeight;
}

- (struct CGSize)outputFrameSize;
- (struct CGSize)sizeOfFBO;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)init;

@end

