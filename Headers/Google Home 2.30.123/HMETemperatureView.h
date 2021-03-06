//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HMETemperatureLabelView;
@protocol HMETemperatureViewDelegate;

@interface HMETemperatureView : UIView
{
    int _scale;
    id <HMETemperatureViewDelegate> _delegate;
    double _targetTemperature;
    double _targetTemperatureHeat;
    double _targetTemperatureCool;
    long long _temperatureViewState;
    HMETemperatureLabelView *_temperatureLabelView;
    HMETemperatureLabelView *_temperatureLabelViewHeat;
    HMETemperatureLabelView *_temperatureLabelViewCool;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMETemperatureLabelView *temperatureLabelViewCool; // @synthesize temperatureLabelViewCool=_temperatureLabelViewCool;
@property(retain, nonatomic) HMETemperatureLabelView *temperatureLabelViewHeat; // @synthesize temperatureLabelViewHeat=_temperatureLabelViewHeat;
@property(retain, nonatomic) HMETemperatureLabelView *temperatureLabelView; // @synthesize temperatureLabelView=_temperatureLabelView;
@property(nonatomic) long long temperatureViewState; // @synthesize temperatureViewState=_temperatureViewState;
@property(nonatomic) double targetTemperatureCool; // @synthesize targetTemperatureCool=_targetTemperatureCool;
@property(nonatomic) double targetTemperatureHeat; // @synthesize targetTemperatureHeat=_targetTemperatureHeat;
@property(nonatomic) double targetTemperature; // @synthesize targetTemperature=_targetTemperature;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) __weak id <HMETemperatureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)heatLabelViewTapped;
- (void)coolLabelViewTapped;
- (void)updateOpacityWithAlpha:(double)arg1 coolOpacity:(double)arg2 heatOpacity:(double)arg3 animated:(_Bool)arg4;
- (void)setTemperatureViewState:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)isDeviceStatusInErrorCondition:(int)arg1;
- (void)setMode:(int)arg1 deviceStatus:(int)arg2;
- (_Bool)isSmallDevice;
- (void)setUpConstraints;
- (id)init;

@end

