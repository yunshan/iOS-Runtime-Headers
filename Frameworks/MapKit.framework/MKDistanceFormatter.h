/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter {
    NSLocale *_locale;
    unsigned int _unitStyle;
    unsigned int _units;
}

@property(copy) NSLocale * locale;
@property unsigned int unitStyle;
@property unsigned int units;

- (BOOL)_useMetric;
- (void)dealloc;
- (id)description;
- (double)distanceFromString:(id)arg1;
- (BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (id)init;
- (BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 errorDescription:(id*)arg5;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void)setUnitStyle:(unsigned int)arg1;
- (void)setUnits:(unsigned int)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDistance:(double)arg1;
- (unsigned int)unitStyle;
- (unsigned int)units;

@end
