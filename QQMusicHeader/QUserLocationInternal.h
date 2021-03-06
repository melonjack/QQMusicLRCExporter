//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QReverseGeocoderDelegate.h"

@class CLLocation, NSString, QPlaceMark, QReverseGeocoder, QUserLocation;

@interface QUserLocationInternal : NSObject <QReverseGeocoderDelegate>
{
    QUserLocation *_owner;
    QReverseGeocoder *_reverseGeocoder;
    CLLocation *_location;
    QPlaceMark *_placeMark;
    CLLocation *_reverseLocation;
}

@property(retain, nonatomic) CLLocation *reverseLocation; // @synthesize reverseLocation=_reverseLocation;
@property(retain, nonatomic) QPlaceMark *placeMark; // @synthesize placeMark=_placeMark;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) QReverseGeocoder *reverseGeocoder; // @synthesize reverseGeocoder=_reverseGeocoder;
@property(nonatomic) QUserLocation *owner; // @synthesize owner=_owner;
- (void)reverseGeocoder:(id)arg1 didFailWithError:(unsigned int)arg2;
- (void)reverseGeocoder:(id)arg1 didFindPlacemark:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

