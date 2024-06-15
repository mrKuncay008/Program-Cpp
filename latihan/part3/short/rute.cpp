#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

void p_route(vector<string> route) {

	string path = "";
	for (int i = 0; i < route.size(); ++i)
	{
		if (i < route.size() - 1)
		{
			path += route[i] + " > ";
		} else {
			path += route[i];
		}
	}
	cout << path << endl;
}

vector<vector <string>> findRoute(unordered_map<string, vector<string>> graph, string start, string end, vector<string> route = {})
{
	route.push_back(start);
	if (start == end)
	{
		return{route};
	}
	if (graph.find(start) == graph.end())
	{
		return{};
	}

	vector<vector<string>> allRoute;
	for (auto point : graph[start])
	{
		if (find(route.begin(), route.end(), point) == route.end()) {
			vector<vector<string>> newRoute = findRoute(graph, point,end, route );
			for (auto newRute : newRoute) {
                allRoute.push_back(newRute);
            }
		}
	}
	return allRoute;
}

int main()
{
	cout << "---- Program Mencari Rute Tercepat -----" << endl;

	unordered_map<string, vector<string>> graph = {
        {"pospol", {"banjar", "royal"}},
        {"banjar", {"royal", "cipete", "cipondoh"}},
        {"cipete", {"alamsutera"}},
        {"cipondoh", {"royal", "poris", "pinang"}},
        {"royal", {"poris", "banjar", "cipondoh"}},
        {"pinang", {"cipondoh", "greenlake"}},
        {"poris", {"greenlake", "cipondoh", "royal"}},
        {"greenlake", {"ciledug", "poris", "pinang"}},
        {"ciledug", {"graha", "greenlake"}},
        {"graha", {"alamsutera"}},
        {"alamsutera", {"cipete", "kantor"}}
    };

    string start, end;
    cout << "Mulai dari mana: ";
    cin >> start;

    cout << "Tujuan kemana: ";
    cin >> end;

    vector<vector<string>> routes = findRoute(graph, start, end);
    cout << "Jumlah jalan: " << routes.size() << endl;

    vector<string> RutePendek = routes[0];
    vector<string> RutePanjang = routes[0];

    for (auto route : routes)
    {
    	if (route.size() < RutePendek.size())
    	{
    		RutePendek = route;
    	}

    	if (route.size() > RutePanjang.size())
    	{
    		RutePanjang = route;
    	}
    }

    cout << "Perjalanan tercepat: ";
    p_route(RutePendek);

    cout << "Perjalanan Terlama: ";
    p_route(RutePanjang);

    cout << "Daftar Perjalanan yang bisa di lewati: \n";
    for (int i = 0; i < routes.size(); ++i)
    {
    	cout << "Rute " << i + 1 << ":\n";
    	p_route(routes[i]);
    }

	return 0;
}