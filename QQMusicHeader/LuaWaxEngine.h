//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LuaWaxEngine : NSObject
{
    NSString *_filepath;
    NSString *_stdlibPath;
}

+ (void)cleanMemory;
@property(copy, nonatomic) NSString *stdlibPath; // @synthesize stdlibPath=_stdlibPath;
- (void)dealloc;
- (void)destroyAfterMoment;
- (void)destroy;
- (void)run;
- (void)runFile:(id)arg1 WithContext:(id)arg2;
- (void)runWithContext:(id)arg1;
- (void)runInView:(id)arg1;
- (id)initWithScriptFile:(id)arg1;

@end

