//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface BehaviorEngine : NSObject
{
    int _clickCount;
}

+ (id)sharedInstance;
@property(nonatomic) int clickCount; // @synthesize clickCount=_clickCount;
- (void)doCleanClickCount;
- (void)doClickBackBtn:(id)arg1 atVC:(id)arg2;

@end

