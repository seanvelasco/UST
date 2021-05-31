clear;
clc;

FN = "Sean Velasco"
SN = "2019129183"
AT = "Activity 5"

%% Exercise 1

H1_2014 = [401 371 123 309 299 323];
H1_2015 = [399 494 390 434 352 560];
H1_2016 = [110 144 365 324 467 390];
H1_2017 = [576 140 535 556 346 249];
H1_2018 = [168 367 506 101 421 514];

year = ['2014'; '2015'; '2016'; '2017'; '2018'];
TOTAL_SALES = [sum(H1_2014) sum(H1_2015) sum(H1_2016) sum(H1_2017) sum(H1_2018)]
AVE_SALES = [mean(H1_2014) mean(H1_2015) mean(H1_2016) mean(H1_2017) mean(H1_2018)]

subplot (2, 1, 1)
plot(AVE_SALES, 'r')
xlim([1 5])
ylim([200 500])
xticks(1:5);
set(gca, 'xticklabel', year)
title('Average Monthly Sale Per Year')
xlabel('Year')
ylabel('Sales in PHP')

subplot (2, 1, 2)
bar(TOTAL_SALES, 0.3, 'y')
xlim([0.85 5.15])
xticks(1:5);
set(gca, 'xticklabel', year)
title('Total H1 Sales Per Year')
xlabel('Year')
ylabel('Sales in PHP')