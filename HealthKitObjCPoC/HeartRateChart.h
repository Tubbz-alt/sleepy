//
//  HeartRateChart.h
//  HealthKitObjCPoC
//
//  Created by Sean Petykowski on 11/6/16.
//  Copyright © 2016 Sean Petykowski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HeartRateChart : UIView

@property (nonatomic) NSArray *datesArray;
// Set the actual data for the chart, and then render it to the view.
- (void)setChartData;

@end
