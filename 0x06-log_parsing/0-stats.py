#!/usr/bin/python3
import fileinput


def aggregate_stats():
    try:
        total_size = 0
        code_dict = {}
        i = 0
        for line in fileinput.input():
            line_list = line.split(' ')
            total_size = total_size + int(line_list[8])

            status_code = line_list[7]
            if status_code in code_dict:
                code_dict[status_code] = code_dict[status_code] + 1
            else:
                code_dict[status_code] = 1

            if i % 10 == 9:
                print('File size: ' + str(total_size))
                for x, y in code_dict.items():
                    print(x + ": " + str(y))

            i = i + 1
        except KeyboardInterrupt:
            print('File size: ' + str(total_size))
            for x, y in code_dict.items():
                print(x + ": " + str(y))

if __name__ == '__main__':
    aggregate_stats()
