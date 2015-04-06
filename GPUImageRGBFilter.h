//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageRGBFilter : GPUImageFilter
{
    int redUniform;
    int greenUniform;
    int blueUniform;
    float _red;
    float _blue;
    float _green;
}

@property(nonatomic) float green; // @synthesize green=_green;
@property(nonatomic) float blue; // @synthesize blue=_blue;
@property(nonatomic) float red; // @synthesize red=_red;
- (id)init;

@end

