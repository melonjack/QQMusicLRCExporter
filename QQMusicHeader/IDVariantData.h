//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDVariantData : NSObject
{
    id _variant;
    int _variantType;
}

+ (id)variantWithDictionary:(id)arg1;
+ (id)variantWithArray:(id)arg1;
+ (id)variantWithImageData:(id)arg1;
+ (id)variantWithPreInstImageId:(int)arg1;
+ (id)variantWithImageId:(int)arg1;
+ (id)variantWithPreInstTextId:(int)arg1;
+ (id)variantWithTextId:(int)arg1;
+ (id)variantWithDate:(id)arg1;
+ (id)variantWithString:(id)arg1;
+ (id)variantWithInteger:(int)arg1;
+ (id)variantWithBoolean:(BOOL)arg1;
+ (id)emptyImageVariant;
+ (id)emptyStringVariant;
+ (id)variantWithEtchObject:(SmartPointer_19daed9d)arg1;
+ (id)stringFromVariantType:(int)arg1;
@property(readonly) int type; // @synthesize type=_variantType;
- (void).cxx_destruct;
- (BOOL)isEqualToVariantData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)isTypeOf:(int)arg1;
- (id)dictionary;
- (id)array;
- (id)imageData;
- (int)preinstalledImageId;
- (int)imageId;
- (int)preinstalledTextId;
- (int)textId;
- (id)date;
- (id)string;
- (int)integerValue;
- (BOOL)booleanValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 type:(int)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (id)initWithPreInstImageId:(int)arg1;
- (id)initWithImageId:(int)arg1;
- (id)initWithPreInstTextId:(int)arg1;
- (id)initWithTextId:(int)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithInteger:(int)arg1;
- (id)initWithBoolean:(BOOL)arg1;
- (SmartPointer_19daed9d)etchObject;
- (id)initWithEtchObject:(SmartPointer_19daed9d)arg1;
- (void)validateVariantType:(int)arg1;

@end

