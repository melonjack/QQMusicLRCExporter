//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

__attribute__((visibility("hidden")))
@interface JKADictionaryEnumerator : NSEnumerator
{
    id collection;
    unsigned int nextObject;
}

- (id)nextObject;
- (id)allObjects;
- (void)dealloc;
- (id)initWithJKADictionary:(id)arg1;

@end

